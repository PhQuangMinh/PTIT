#include<stdio.h>
#include<math.h>
int check(long long n){
	long long k=n;
	long long tn=0;
    int sum=0;
	while (k!=0){
		int du=k%10;
		if (du%2==0) return 0;
		tn=tn*10+du;
		sum=sum+du;
		k/=10;
	}
	if (tn==n && sum%2==1) return 1;
	return 0;
}
void solve(){
	long long n;
	scanf("%lld", &n);
	if (check(n)) printf("YES");
	else printf("NO");
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}

#include<stdio.h>
#include<math.h>
int check(long long n){
	if (n%2==1) return 0;
	while (n!=0){
		int k=n%10;
		if (k%2==1) return 0;
		n/=10; 
	}
	return 1;
}
int solve(){
	long long n;
	scanf("%lld", &n);
	if (check(n)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int n){
	int k=n;
	int t=0;
    int sum=0;
	while (k!=0){
		int du=k%10;
		if (du==4) return 0;
		t=t*10+du;
		sum=sum+du;
		k/=10;
	}
	if (t==n && sum%10==0) return 1;
	return 0;
}
void solve(){
	int n;
	scanf("%d", &n);
    int dau=1;
    int cuoi=9;
    for (int i=1;i<=n-1;i++){
    	dau=dau*10;
    	cuoi=cuoi*10+9;
	}
	for (int i=dau;i<=cuoi;i++) 
	    if (check(i)) printf("%d ", i);
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}


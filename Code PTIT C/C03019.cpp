#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int n){
	int tn=0;
	int sum=0;
	int x=n;
	int dem6=0;
	while (x!=0){
		int k=x%10;
		tn=tn*10+k;
		sum+=k;
		x/=10;
	}
	if (n==tn && sum%10==0) return 1;
	return 0;
}
void solve(){
	int n;
	scanf("%d", &n);
	int dau=pow(10, n-1);
	int cuoi=pow(10, n);	
	int dem=0;
	for (int i=dau;i<=cuoi;i++) 
	    if (check(i)){
		    dem++;
		}
	printf("%d", dem);
}
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) printf("\n");
	}
}

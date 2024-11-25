#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[n+5];
	for (int i=1;i<=m;i++) scanf("%d", &a[i]);
	int dem=0; 
	int dophu=2*k+1;
	if (a[1]-k>1){
		int d=a[1]-k-1;
		dem=dem+d/dophu;
		if (d%dophu!=0) dem++;
	}
	for (int i=2;i<=m;i++){
		int dau=a[i-1]+k+1;
		int cuoi=a[i]-k-1;
		int d=cuoi-dau+1;
		if (d>0){
			dem=dem+d/dophu;
		    if (d%dophu!=0) dem++;
		}
	}
	if (n-a[m]-k>0){
		int d=n-a[m]-k;
		dem=dem+d/dophu;
		if (d%dophu!=0) dem++;
	}
	printf("%d", dem);
}
int main(){
    solve();
}

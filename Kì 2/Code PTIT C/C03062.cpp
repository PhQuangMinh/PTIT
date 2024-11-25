#include<stdio.h>
void solve(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b){
		int t=a;a=b;b=t;
	}
	int d[100]={0};
	for (int i=a;i<=b;i++){
		int k=i;
		for (int j=2;j*j<=k;j++)
		    if (k%j==0){
		    	int dem=0;
		    	while (k%j==0){
		    		dem++;
		    		k/=j;
				}
				if (dem>d[j]) d[j]=dem;
			}
		if (k>1 && d[k]==0) d[k]++;
	}
	long long res=1;
	for (int i=2;i<=b;i++)
	    if (d[i]>0){
	    	for (int j=1;j<=d[i];j++)
	    	    res*=i;
		}
	printf("%lld\n", res);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

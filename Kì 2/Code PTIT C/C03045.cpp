#include<stdio.h>
#include<math.h>
#include<string.h>
long long bcnn(int x){
	int a[105]={};
	for (int i=2;i<=x;i++){
		int k=i;
		for (int j=2;j<=sqrt(k);j++){
			if (k%j==0){
				int d=0;
				while (k%j==0){
					d++;
					k/=j;
				}
				if (d>a[j]) a[j]=d;
			}
		}
		if (k>1 && a[k]==0) a[k]=1;
	}
	printf("\n");
	long long sum=1;
	for (int i=1;i<=x;i++)
	    if (a[i]>0){
	    	for (int j=1;j<=a[i];j++){
	    		sum*=i;
			}
		}
	return sum;
}
void solve(){
	int n;
	scanf("%d", &n);
	printf("%lld\n", bcnn(n));
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}


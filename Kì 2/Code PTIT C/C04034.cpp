#include<stdio.h>
#include<math.h>
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	int d[1000]={0};
	for (int i=1;i<=n;i++) scanf("%d", &a[i]);
	int max=a[n];
	d[n]=1;
	for (int i=n-1;i>=1;i--)
	    if (a[i]>max){
	    	d[i]=1;
	    	max=a[i];
		}
	for (int i=1;i<=n;i++)
	    if (d[i]) printf("%d ", a[i]);
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

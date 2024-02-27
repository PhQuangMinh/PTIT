#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
	int n;
	scanf("%d", &n);
	int x, demc=0, deml=0;
	int a[n+5], b[n+5];
	for (int i=1;i<=n;i++){
		scanf("%d", &a[i]);
		scanf("%d", &b[i]);
	}
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i]>a[j]){
	        	int t=a[i];a[i]=a[j];a[j]=t;
	        	t=b[i];b[i]=b[j];b[j]=t;
			}
	int max=a[1]+b[1];
	for (int i=2;i<=n;i++)
	    if (max>a[i]) max+=b[i];
	    else max=a[i]+b[i];
	printf("%d", max);
}
int main(){
    solve();
}

#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n, m, k;
	scanf("%d%d%d", &n, &m, &k);
	int a[n+5][m+5];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
	        scanf("%d", &a[i][j]);
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i][k]>a[j][k]){
	        	int tmp=a[i][k];
	        	a[i][k]=a[j][k];
	        	a[j][k]=tmp;
			}
    for (int i=1;i<=n;i++){
    	for (int j=1;j<=m;j++)
    	    printf("%d ", a[i][j]);
    	printf("\n");
	}
}
int main(){
    int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++) solve();
}

#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+5][m+5];
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=m;j++) 
		    scanf("%d", &a[i][j]);
	int x, y;
	scanf("%d%d", &x, &y);
	for (int i=1;i<=n;i++){
		int t=a[i][x];
		a[i][x]=a[i][y];
		a[i][y]=t;
	}	    
	for (int i=1;i<=n;i++){
	    for (int j=1;j<=m;j++)
	        printf("%d ", a[i][j]);
	    printf("\n");
	}
}

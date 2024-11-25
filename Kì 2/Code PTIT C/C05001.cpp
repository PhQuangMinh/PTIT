#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+5][m+5];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
	        scanf("%d", &a[i][j]);
	for (int i=1;i<=m;i++){
	    for (int j=1;j<=n;j++)
	        printf("%d ", a[j][i]);
	    printf("\n");
	}
}

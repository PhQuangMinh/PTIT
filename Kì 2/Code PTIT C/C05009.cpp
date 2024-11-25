#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n, m;
	scanf("%d", &n);
	int a[n+5][n+5];
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=n;j++)
		    scanf("%d", &a[i][j]);
	for (int i=1;i<=n;i++){
		int t=a[i][i];
		a[i][i]=a[i][n-i+1];
		a[i][n-i+1]=t;
	}	    
	for (int i=1;i<=n;i++){
	    for (int j=1;j<=n;j++)
	        printf("%d ", a[i][j]);
	    printf("\n");
	}
}

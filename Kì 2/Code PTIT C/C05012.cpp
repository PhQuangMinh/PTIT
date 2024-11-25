#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(int t){
	int n, m;
	scanf("%d", &n);
	int a[n+5][n+5];
	for (int i=1;i<=n;i++){
		    for (int j=1;j<=i;j++) a[i][j]=j;
		    for (int j=i+1;j<=n;j++) a[i][j]=0;
		}
	printf("Test %d:\n", t);
	int sum=0;
	int b[n+5][n+5];
	int i, j, k;
	for (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
	    	int sum=0;
	    	for (k=1;k<=n;k++)
	    	    sum+=a[i][k]*a[j][k];
	    	b[i][j]=sum;
		}
	}
	for (int i=1;i<=n;i++){
	    for (int j=1;j<=n;j++)
	        printf("%d ", b[i][j]);
	    printf("\n");
	}   
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++) solve(i);
} 

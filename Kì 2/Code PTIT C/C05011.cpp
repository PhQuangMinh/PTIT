#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(int t){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[105][105];
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=m;j++)
		    scanf("%d", &a[i][j]);
	printf("Test %d:\n", t);
	int sum=0;
	int b[105][105];
	int i, j, k;
	for (i=1;i<=n;i++){
	    for (j=1;j<=n;j++){
	    	int sum=0;
	    	for (k=1;k<=m;k++)
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

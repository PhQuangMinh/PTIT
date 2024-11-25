#include<stdio.h>
#include<math.h>
void solve(int t){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+5][m+5];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
	        scanf("%d", &a[i][j]);
	printf("Test %d:\n", t);
	for (int i=2;i<=n;i++){
	    for (int j=2;j<=m;j++)
	        printf("%d ", a[i][j]);
	    printf("\n");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve(i);
	}
}

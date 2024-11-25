#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	int k=n;
	int a[2*n+5][2*n+5];
	int h1=1, h2=2*n-1, c1=1, c2=2*n-1;
	while (k>0){
		for (int i=c1;i<=c2;i++) a[h1][i]=k;
		for (int i=h1;i<=h2;i++) a[i][c2]=k;
		for (int i=c1;i<=c2;i++) a[h2][i]=k;
		for (int i=h1;i<=h2;i++) a[i][c1]=k;
		k--;h1++;c1++;
		h2--;
		c2--;
	}
	for (int i=1;i<=2*n-1;i++){
	    for (int j=1;j<=2*n-1;j++)
	        printf("%d", a[i][j]);
	    printf("\n");
	}
	     
}
int main(){
	solve();
}

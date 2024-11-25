#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n+5][m+5];
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=m;j++)
	        scanf("%d", &a[i][j]);
	int h1=1, c1=1, h2=n, c2=m;
	int k=0;
	while (h1<=h2 && c1<=c2){
		for (int i=c1;i<=c2;i++){
		    printf("%d ", a[h1][i]);
		    k++;
		}
		h1++;
		if (k==m*n) break;
		for (int i=h1;i<=h2;i++){
		    printf("%d ", a[i][c2]);
		    k++;
        }
		c2--;
		if (k==m*n) break;
		for (int i=c2;i>=c1;i--){
		    printf("%d ", a[h2][i]);
		    k++;
		}
		h2--;
		if (k==m*n) break;
		for (int i=h2;i>=h1;i--){
		    printf("%d ", a[i][c1]);
		    k++;
		}
		c1++;
		if (k==m*n) break;
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

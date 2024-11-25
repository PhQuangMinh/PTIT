#include<stdio.h>
#include<math.h>
#include<string.h>
int a[105][105], b[105][105], c[105][105], d[105][105], e[105][105];
void nhanmt(int n, int m, int p){
	for (int i=1;i<=n;i++){
		for (int j=1;j<=p;j++){
			int sum=0;
			for (int k=1;k<=m;k++)
			    sum=sum+a[i][k]*b[k][j];
			d[i][j]=sum;
		}
	}
}
void nhanmt1(int n, int p, int q){
	for (int i=1;i<=n;i++){
		for (int j=1;j<=q;j++){
			int sum=0;
			for (int k=1;k<=p;k++)
			    sum=sum+d[i][k]*c[k][j];
			e[i][j]=sum;
		}
	}
}
void solve(){
	int n, m, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	for (int i=1;i<=m;i++) 
	    for (int j=1;j<=n;j++) scanf("%d", &a[i][j]);
	for (int i=1;i<=n;i++) 
	    for (int j=1;j<=p;j++) scanf("%d", &b[i][j]);
	for (int i=1;i<=p;i++) 
	    for (int j=1;j<=q;j++) scanf("%d", &c[i][j]);
	nhanmt(m, n, p);
	nhanmt1(m, p, q);
	for (int i=1;i<=m;i++){
	    for (int j=1;j<=q;j++)
	        printf("%d ", e[i][j]);
	    printf("\n");
	}
}
int main(){
	solve();
}

#include<stdio.h>
int snt(int n){
	for (int i=2;i*i<=n;i++)
	    if (n%i==0) return 0;
	return n>1;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5][n+5];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
	        scanf("%d", &a[i][j]);
	int hmax, cnt=0;
	for (int i=1;i<=n;i++){
		int dem=0;
		for (int j=1;j<=n;j++)
		    if (snt(a[i][j])) dem++;
		if (dem>cnt){
			cnt=dem;
			hmax=i;
		}
	}
	printf("%d\n", hmax);
	for (int i=1;i<=n;i++)
	    if (snt(a[hmax][i])) printf("%d ", a[hmax][i]);
}

#include<stdio.h>
#include<math.h>
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%2==0) return 0;
	return x>1;
}
void solve(){
	int n;
	int max=0, imax;
    scanf("%d", &n);
    int a[n+5][n+5];
	for (int i=1;i<=n;i++){
		int dem=0;
		for (int j=1;j<=n;j++){
			scanf("%d", &a[i][j]);
			if (snt(a[i][j])) dem++;
		}
		if (dem>max){
		   max=dem;
		   imax=i;
	    }
	}
	printf("%d\n", max);
	for (int i=1;i<=n;i++)
	    if (snt(a[imax][i])) 
		   printf("%d ", a[imax][i]);
}
int main(){
	solve();
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<limits.h>
int a[100005];
void qsort(int l, int r){
	int k=a[(l+r)/2];
	int i=l, j=r;
	while (i<=j){
		while (a[i]<k) i++;
		while (a[j]>k) j--;
		if (i<=j){
			int t=a[i];a[i]=a[j];a[j]=t;
			i++;
			j--;
		}
	}
	if (j>l) qsort(l, j);
	if (i<r) qsort(i, r);
}
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) 
	   scanf("%d", &a[i]);
	qsort(1, n);
	int min=INT_MAX;
	int dem=0;
	for (int i=2;i<=n;i++)
	    if (a[i]-a[i-1]==min) dem++;
	    else
	        if (a[i]-a[i-1]<min){
	        	min=a[i]-a[i-1];
	        	dem=1;
			}
	printf("%d %d\n", min, dem);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}
//2
//4
//6 -3 0 4
//3
//-2 0 2

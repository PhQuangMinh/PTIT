#include<stdio.h>
#include<math.h>
#include<string.h>
int a[5005];
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
int tknp(int l, int r, int x){
	while (l<=r){
		int k=(l+r)/2;
		if (x>a[k]) l=k+1;
		else 
		    if (x<a[k]) r=k-1;
		    else return k;
	}
	return 0;
}
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++) 
	   scanf("%d", &a[i]);
    qsort(1, n);
    for (int i=1;i<=n-2;i++)
        for (int j=i+1;j<=n-1;j++){
        	long long  t=(long long)a[i]*a[i]+(long long)a[j]*a[j];
        	long long k=sqrt(t);
        	if ((long long)k*k==t && tknp(j+1, n, k)!=0){
        		printf("YES\n");
        		return;
			} 
		}
	printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

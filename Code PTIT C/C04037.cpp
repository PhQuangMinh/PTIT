#include<stdio.h>
int d[1000000], d1[1005];
int main(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=1;i<=n;i++) {
	    scanf("%d", &a[i]);
	    d[a[i]]++;
	}
	int dem=0;
	for (int i=1;i<=n;i++)
	    if (d[a[i]]>1) {
		    dem++;
		    d1[i]=1;
		    d[a[i]]=0;
		}
	printf("%d\n", dem);
	for (int i=1;i<=n;i++)
	    if (d1[i]==1)
		    printf("%d ", a[i]);
}

#include<stdio.h>
int d[100000];
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
	    if (d[a[i]]==1) dem++;
	int ok=1;
	for (int i=1;i<=n;i++)
	    if (d[a[i]]>1){
		    printf("%d ", a[i]);
		    d[a[i]]=0;
		    ok=0;
		}
	if (ok==1) printf("0");
}

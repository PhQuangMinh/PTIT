#include<stdio.h>
int dem=1;
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	int d[100000]={0};
	for (int i=1;i<=n;i++) {
	    scanf("%d", &a[i]);
	    d[a[i]]++;
	}
	printf("Test %d:\n", dem);
	for (int i=1;i<=n;i++)
	    if (d[a[i]]>=1){
		    printf("%d xuat hien %d lan\n", a[i], d[a[i]]);
		    d[a[i]]=0;
		}
	dem++;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

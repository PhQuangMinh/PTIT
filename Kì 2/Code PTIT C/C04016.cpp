#include<stdio.h>
#include<math.h>
int dem=1;
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	int max=0;
	int d[100005]={0};
	for (int i=1;i<=n;i++) {
	    scanf("%d", &a[i]);
	    if (snt(a[i])) d[a[i]]++;
	    if (a[i]>max) max=a[i];
	}
	printf("Test %d:\n", dem);
	for (int i=1;i<=max;i++)
	    if (d[i]>=1){
		    printf("%d xuat hien %d lan\n", i, d[i]);
		}
	dem++;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

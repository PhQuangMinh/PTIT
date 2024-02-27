#include<stdio.h>
#include<math.h>
int solve(){
	int n;
	scanf("%d", &n);
	int dem=0;
	int a[35];
	for (int i=1;i<=n;i++)
		scanf("%d", &a[i]);
    for (int i=2;i<=n;i++)
        if (a[i]==a[i-1]) dem++;
    printf("%d\n", dem);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

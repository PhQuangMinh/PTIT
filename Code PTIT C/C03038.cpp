#include<stdio.h>
#include<math.h>
#include<string.h>
int max(int n, int p){
	int dem=0;
	for (int i=p;i<=n;i+=p){
		int k=i;
		while (k%p==0){
			dem++;
			k/=p;
		}
	}
	return dem;
}
void solve(){
	int n, p;
	scanf("%d%d", &n, &p);
	printf("%d\n", max(n, p));
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

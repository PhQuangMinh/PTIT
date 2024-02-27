#include<stdio.h>
#include<math.h>
int snt(int x){
	if (x<2) return 0;
	int i;
	for (i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return 1;
}
void solve(){
	int n;
	scanf("%d", &n);
	if (snt(n)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

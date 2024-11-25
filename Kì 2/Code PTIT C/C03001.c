#include<stdio.h>
int check(int x){
	int sum=0;
	while (x!=0){
		sum+=x%10;
		x/=10;
	}
	if (sum%10==0) return 1;
	return 0;
}
void solve(){
	int n;
	scanf("%d", &n);
	if (check(n)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}
//3
//3333
//555555
//123455

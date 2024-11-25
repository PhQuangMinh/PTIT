#include<stdio.h>
#include<math.h>
int check(long long n){
	if (n%2==1) return 0;
	long long k=n;
	int demc=0, deml=0;
	while (k!=0){
		int t=k%10;
		if (t%2==0) demc++;
		else deml++;
		k/=10;
	}
	if (demc>deml) return 1;
	return 0;
}
void solve(){
	long long n;
	scanf("%lld", &n);
	if (check(n)) printf("YES\n");
	else printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

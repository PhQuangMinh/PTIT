#include<stdio.h>
#include<math.h>
#include<string.h>
long long max(long long x){
	long long max=0;
	for (int i=2;i<=sqrt(x);i++){
		if (x%i==0){
			while (x%i==0) x/=i;
			if (i>max) max=i;
		}
	}
	if (x>1) return x;
	return max;
}
void solve(){
	long long n;
	scanf("%lld", &n);
	printf("%lld\n", max(n));
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

#include<stdio.h>
#include<math.h>
void solve(){
	int n, i;
	scanf("%d", &n);
	int t=1;
	for (i=2;i<=sqrt(n);i++){
		if (n%i==0){
			t*=i;
			while (n%i==0) n/=i;
		}
	}
	if (n>1) t*=n;
	printf("%d\n", t);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

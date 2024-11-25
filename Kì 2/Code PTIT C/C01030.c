#include<stdio.h>
#include<math.h>
void solve(){
	int n, i;
	scanf("%d", &n);
	for (i=2;i<=sqrt(n);i++){
		while (n%i==0){
			printf("%d ", i);
			n/=i;
		}
	}
	if (n>1) printf("%d\n", n);
	else printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

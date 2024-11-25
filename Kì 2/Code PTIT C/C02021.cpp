#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		int l=i;
		for (int j=1;j<=i;j++){
			printf("%d ", l);
			l+=n-j;
		}
		if (i!=n) printf("\n");
	}
}
int main(){
	solve();
}

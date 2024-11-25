#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++) printf("~");
		int k=2*i-1;
		for (int j=1;j<k;j+=2) printf("%d", j);
		for (int j=k;j>=1;j-=2) printf("%d", j);
		if (i!=n) printf("\n");
	}
}
int main(){
	solve();
}

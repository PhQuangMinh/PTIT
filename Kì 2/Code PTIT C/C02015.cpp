#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=2*n-1;i+=2){
		for (int j=1;j<=i;j++) printf("%d", j);
		printf("\n");
	}
}
int main(){
	solve();
}

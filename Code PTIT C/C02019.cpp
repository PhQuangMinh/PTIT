#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	for (int i=2;i<=2*n;i+=2){
		for (int j=2;j<i;j+=2) printf("%d", j);
		for (int j=i;j>=2;j-=2) printf("%d", j);
		if (i!=2*n) printf("\n");
	}
}
int main(){
	solve();
}

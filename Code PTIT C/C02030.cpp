#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	printf("@\n");
	for (int i=2;i<=2*n-2;i+=2){
		printf("@");
		for (int j=2;j<i;j+=2) printf("%c", j+64);
		for (int j=i;j>=2;j-=2) printf("%c", j+64);
		printf("@");
		if (i!=2*n-2) printf("\n");
	}
}
int main(){
	solve();
}

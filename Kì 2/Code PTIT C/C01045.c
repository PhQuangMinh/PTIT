#include<stdio.h>
void solve(int n){
	int cuoi=n%10;
	while (n>=10) n/=10;
	printf("%d %d", n, cuoi);
}
int main(){
	int n;
	scanf("%d", &n);
	solve(n);
}

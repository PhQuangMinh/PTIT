#include<stdio.h>
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, b;
		scanf("%d%d", &a, &b);
		long long bc=(long long)a*b;
		int uc=ucln(a, b);
		bc/=uc;
		printf("%lld %d\n", bc, uc);
	}
}

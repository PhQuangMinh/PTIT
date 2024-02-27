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
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n", ucln(a, b));
	long long t=(long long)a*b;
	printf("%lld", t/ucln(a, b));
}

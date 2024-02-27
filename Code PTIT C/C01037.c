#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b){
		int t=a;a=b;b=t;
	}
	int k=b-a+1;
	printf("%lld", (long long)k*(b+a)/2);
}

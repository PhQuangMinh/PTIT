#include<stdio.h>
int gt(int n){
	if (n==0) return 1;
	return n*gt(n-1);
}
int check(int n){
	int sum=0;
	int k=n;
	while (k!=0){
		sum+=gt(k%10);
		k/=10;
	}
	if (sum==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", check(n));
}

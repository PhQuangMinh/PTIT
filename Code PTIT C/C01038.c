#include<stdio.h>
int change(int n){
	int dau=n%10;
	int cuoi=n/10;
	int k=0;
	while (cuoi>=10){
		k=k*10+cuoi%10;
	    cuoi/=10;
	}
	while (k!=0){
		dau=dau*10+k%10;
		k/=10;
	}
	dau=dau*10+cuoi;
	return dau;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", change(n));
}

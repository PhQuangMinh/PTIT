#include<stdio.h>
int count(int n){
	int dem=0;
	while (n!=0){
		n/=10;
		dem++;
	}
	return dem;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", count(n));
}

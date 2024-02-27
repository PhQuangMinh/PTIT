#include<stdio.h>
int check(int n){
	int sum=0;
	int i;
	for (i=1;i<n;i++)
	    if (n%i==0) sum+=i;
	if (sum==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	printf("%d", check(n));
}

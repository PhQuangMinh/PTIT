#include<stdio.h>
void tcs(){
	int n;
    scanf("%d", &n);
    int sum=0;
    while (n!=0){
    	sum+=n%10;
    	n/=10;
	}
	printf("%d\n", sum);
}
int main(){
	int t;
	scanf("%d", &t);
	int i;
	for (i=1;i<=t;i++) tcs();
}

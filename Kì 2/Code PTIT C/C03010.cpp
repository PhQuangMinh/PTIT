#include<stdio.h>
#include<math.h>
int gt(int x){
	int t=1;
	for (int i=1;i<=x;i++) t*=i;
	return t;
}
int strong(int n){
	int sum=0;
	int x=n;
	while (x!=0){
		int k=x%10;
		sum+=gt(k);
		x/=10;
	}
	if (sum==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	if(n>40585) printf("1 2 145 40585");
	else
	    for (int i=1;i<n;i++)
	        if (strong(i)) printf("%d ", i);
}

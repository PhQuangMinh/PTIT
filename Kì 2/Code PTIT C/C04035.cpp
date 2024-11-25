#include <stdio.h>
#include <math.h>
#include <string.h>
int min(int a, int b){
	if (a>b) return b;
	return a;
}
int max(int a, int b){
	if (a>b) return a;
	return b;
}
int main() {
	int n;
	scanf("%d",&n);
	int min1 = 50001;
	int min2 = 50002;
	int sum1=0;
	int sum2=0;
	for (int i=1;i<=n;i++){
		int a, b;
		scanf("%d%d",&a,&b);
		sum1+=a;min1=min(a,min1);
		sum2+=b;min2=min(b,min2);
		
	}
	sum1+=min2;
	sum2+=min1;
	int res=max(sum1,sum2);
	printf("%d",res);
}


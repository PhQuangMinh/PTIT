#include<stdio.h>
#include<math.h>
int tcs(int x){
	int sum=0;
	while (x!=0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (tcs(a)>tcs(b)) printf("%d %d", b, a);
	else printf("%d %d", a, b);
}

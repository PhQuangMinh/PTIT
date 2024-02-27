#include<stdio.h>
#include<math.h>
int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	int a=sqrt(m);
	if (a<sqrt(m)) a++;
	int b=sqrt(n), i;
	printf("%d\n", b-a+1);
	for (i=a;i<=b;i++) printf("%d\n", i*i);
}

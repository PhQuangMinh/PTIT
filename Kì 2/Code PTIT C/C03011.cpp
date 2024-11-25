#include<stdio.h>
#include<math.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int d[10]={1, 2, 145, 40585};
	if (a>b){
		int t=a;a=b;b=t;
	}
	for (int i=0;i<4;i++)
	    if (d[i]>=a && d[i]<=b) printf("%d ", d[i]);
}

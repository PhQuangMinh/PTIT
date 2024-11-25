#include<stdio.h>
int main(){
	int n, t, i;
	scanf("%d", &t);
	for (i=1;i<=t;i++){
	    scanf("%d", &n);
	    printf("%.15lf\n", (double)1/n);
	}
}

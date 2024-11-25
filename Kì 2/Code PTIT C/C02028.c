#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for (i=1;i<=2*n-1;i+=2){
		int j;
		for (j=i;j<2*n;j+=2) printf("%c", j+64);
		if (i!=2*n-1) printf("\n");
	}
}

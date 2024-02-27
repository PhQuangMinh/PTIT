#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i;
	for (i=n;i>=1;i--){
		int j;
		for (j=i-1;j<=2*i-2;j++) printf("%c", j+64);
		if (i!=1) printf("\n");
	}
}

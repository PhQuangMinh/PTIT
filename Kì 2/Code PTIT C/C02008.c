#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for (i=1;i<=n;i++){
		if (i==1 || i==2 || i==n){
			for (j=1;j<=i;j++) printf("*");
			if (i!=n) printf("\n");
		}
		else{
			printf("*");
			for (j=1;j<=i-2;j++) printf(".");
			printf("*\n");
		}
	}
}

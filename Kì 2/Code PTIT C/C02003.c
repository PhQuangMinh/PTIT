#include<stdio.h>
int main(){
	int n, m;
	scanf("%d", &n);
	int i;
	for (i=1;i<=n;i++){
		int j;
		if (i==1 || i==n){
			for (j=1;j<=n;j++) printf("*");
			if (i==1) printf("\n");
		}
		else{
			printf("*");
			for (j=1;j<=n-2;j++) printf(".");
			printf("*\n");
		}
	}
}

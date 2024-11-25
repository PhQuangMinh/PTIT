#include<stdio.h>
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int i;
	for (i=1;i<=n;i++){
		int j;
		for (j=1;j<=i-1;j++) printf("~");
		for (j=1;j<=m;j++) printf("*");
	    if (i!=n) printf("\n");
	}
}

#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int i, j;
	for (i=1;i<=n;i++){
		if (i<=m){
			for (j=i;j<=m;j++) printf("%c", j+64);
			for (j=i-1;j>=1;j--) printf("%c", j+64);
		}
		else
		    for (j=m;j>=1;j--) printf("%c", j+64);
		if (i!=n) printf("\n");
	}
}

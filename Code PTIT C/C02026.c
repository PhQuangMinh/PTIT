#include<stdio.h>
int main(){
	int m, n;
	scanf("%d%d", &n, &m);
	int i,j;
	for (i=n;i>=1;i--){
		if (i>=m)
		    for (j=1;j<=m;j++) printf("%c", m+64);
		else{
			for (j=i;j<=m;j++) printf("%c", j+64);
			for (j=1;j<i;j++) printf("%c", m+64);
		}
		if (i!=1) printf("\n");
	}
}

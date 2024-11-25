#include<stdio.h>
int main(){
	int m, n;
	scanf("%d%d", &n, &m);
	int i,j;
	for (i=1;i<=n;i++){
		if (i==1){
			printf("@");
			for (j=1;j<m;j++) printf("%c", j+64);
		}
		else
		    if (i<=m){
		    	for (j=i-1;j<m;j++) printf("%c", j+64);
		    	for (j=1;j<=i-1;j++) printf("%c", m+63);
			}
		    else
		        for (j=1;j<=m;j++) printf("%c", m+63);
		if (i!=n) printf("\n");
	}
}

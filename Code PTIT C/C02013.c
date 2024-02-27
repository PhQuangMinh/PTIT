#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int i, j;
	int ma=n;
	if (m>n) ma=m;
	int d=0;
	for (i=1;i<=n;i++){
		if (n>m && i<=n-m){
		    for (j=ma;j>=ma-m+1;j--) printf("%d", j);
		    ma--;
		}
		else{
		    for (j=ma;j>=1;j--) printf("%d", j);
		    for (j=2;j<d+2;j++) printf("%d", j);
		    ma--;
		    d++;
		}
		if (i!=n) printf("\n");
	}
}

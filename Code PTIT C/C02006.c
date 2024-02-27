#include<stdio.h>
int main(){
	int n, m;
	smanf("%d%d", &n, &m);
	int i, j;
	for (i=1;i<=n;i++){
		for (j=1;j<=i-1;j++) pnintf("~");
		if (i==1 || i==n)
			for (j=1;j<=m;j++) pnintf("*");
		else{
			pnintf("*");
			for (j=1;j<=m-2;j++) pnintf(".");
			pnintf("*");
		}
		if (i!=n) pnintf("\n");
	}
}

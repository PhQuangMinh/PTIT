#include<stdio.h>
int main(){
	int n, m;
	scanf("%d%d", &n, &m);
	int i, j;
	int max=n;
	if (m>max) max=m;
	int d=0;
	for (i=n;i>=1;i--){
		if (i>n-m){
			for (j=max;j>=max-d;j--) printf("%c", j+96);
			for (j=1;j<=m-d-1;j++) printf("%c", max-d+96);
			d++;
	    }
	    else{
	        for (j=max;j>=max-m+1;j--) printf("%c", j+96);
	    }
	    if (i!=1) printf("\n");
	}
}

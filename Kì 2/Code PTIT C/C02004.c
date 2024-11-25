#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for (i=1;i<=n;i++){
	    for (j=1;j<=n-i;j++) printf("~");
	    if (i==1 || i==n){
		    for (j=1;j<=n;j++) printf("*");
	        if (i!=n) printf("\n");
	    }
	    else{
	    	printf("*");
			for (j=1;j<=n-2;j++) printf(".");
			printf("*\n");
		}
	}      
}

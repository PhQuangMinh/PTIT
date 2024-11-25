#include<stdio.h>
int gt(int n){
	if (n==0) return 1;
	return n*gt(n-1);
}
int pascal(int x, int y){
	return gt(x)/(gt(y)*gt(x-y));
}
int main(){
	int n;
	scanf("%d", &n);
	int i, j;
	for (i=0;i<n;i++){
	    for (j=0;j<=i;j++){
	        printf("%d ", pascal(i, j));
	    }
	    if (i!=n-1) printf("\n");
	}
}

#include<stdio.h>
int f[45];
void fibonaci(){
	f[0]=0;
	f[1]=1;
	for (int i=2;i<=39;i++)
	    f[i]=f[i-1]+f[i-2];
}
int main(){
	fibonaci();
	int n;
	scanf("%d", &n);
//	printf("%d ", f[40]);
	for (int i=1;i<=39;i++)
	    if (f[i]==n){
	    	printf("1");return 0;
		}
	printf("0");
}

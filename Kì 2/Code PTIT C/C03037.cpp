#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	char n[20];
	scanf("%s", &n);
	int a[10]={0};
	for (int i=0;i<strlen(n);i++){
		int k=n[i]-'0';
		if (k==2 || k==3 || k==5 ||k==7) a[k]++;
	}
	int check[10]={0};
	for (int i=0;i<strlen(n);i++){
		int k=n[i]-'0';
	    if (check[k]==0)
		    if (k==2 || k==3 || k==5 ||k==7){
	    	    check[k]=1;
	    	    if (a[k]>0) printf("%d %d\n", k, a[k]);
		}
	}
}

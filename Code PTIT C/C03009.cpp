#include<stdio.h>
#include<math.h>
int snt(int n){
	for (int i=2;i*i<=n;i++)
	    if (n%i==0) return 0;
	return n>1;
}
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	int d[20]={2, 3, 5, 7, 11, 13};
	if (a>b){
		int t=a;a=b;b=t;
	}
	for (int i=0;i<6;i++){
        int k=pow(2, d[i])-1;
        if (snt(k)){
        	int t=pow(2, d[i]-1)*(pow(2, d[i])-1);
        	if (t>=a && t<=b) printf("%d ", t);
		}
	}
}

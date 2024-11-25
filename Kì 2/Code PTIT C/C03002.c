#include <stdio.h>
#include <math.h>
int a[1000000];
void sangnt(){
	a[1]=1;
	int i, j;
	for(i=2;i<=sqrt(1000000);i++){
		for(j=2;j<=1000000/i;j++) a[j*i]=1;
	}
}
int main() {
	int n;
	scanf("%d",&n);
	sangnt();
	int i;
	for(i=2;i<=n;i++)
		if(a[i]==0) printf("%d\n",i);
}


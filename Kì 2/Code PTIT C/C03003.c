#include <stdio.h>
#include <math.h>
int a[5000000];
void sangnt(){
	a[1]=1;
	int i, j;
	for(i=2;i<=sqrt(5000000);i++){
		for(j=2;j<=5000000/i;j++) a[j*i]=1;
	}
}
int main() {
	int n;
	scanf("%d",&n);
	sangnt();
	int i=2, d=0;
	while (d<n){
		if (!a[i]){
			printf("%d\n", i);
			d++;
		}
		i++;
	}
}


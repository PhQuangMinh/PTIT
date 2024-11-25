#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	int i, x;
	for (i=1;i<=t;i++){
		scanf("%d", &x);
		int k=sqrt(x);
		if (k*k==x) printf("YES\n");
		else printf("NO\n");
	}
}

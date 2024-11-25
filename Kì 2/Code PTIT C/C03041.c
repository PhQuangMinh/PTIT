#include<stdio.h>
int main(){
	int a, b, c, d, t;
	scanf("%d", &t);
	int i;
	for (i=1;i<=t;i++){
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (c-a==d-b) printf("YES\n");
		else printf("NO\n");
	}
}

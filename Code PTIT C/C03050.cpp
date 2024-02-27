#include<stdio.h>
#include<math.h>
#include<string.h>
int d[1000005]={};
int main(){
	int n;
	scanf("%d", &n);
	for (int i=1;i<=n;i++){
		int a, b;
		scanf("%d%d", &a, &b);
		d[a]++;
		d[b]++;
		if (d[a]==n-1 || d[b]==n-1){
			printf("Yes");
			return 0;
		}
	}
	printf("No");
}

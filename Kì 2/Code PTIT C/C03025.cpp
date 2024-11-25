#include <stdio.h>
#include <math.h>
#include <string.h>
int check(int n){
	for (int i=2;i<=sqrt(n);i++)
	    if (n%i==0) return 0;
	return n>1;	
}
int checknt(int x){
	int sum=0;
	int n=x;
	while(n){
		int t=n%10;
		if(t!=2 && t!=3 && t!=5 && t!=7) return 0;
		sum+=t;
		n/=10;
	}
	if (check(x) && check(sum)) return 1;
	return 0;
}

int main() {
	int a;
	scanf("%d",&a);
	while(a--){
		int m,n;
		int res=0;
		scanf("%d%d",&m,&n);
		for(int i=m; i<=n;i++){
			if(checknt(i)) res++;
		}
		printf("%d\n",res);
	}
}



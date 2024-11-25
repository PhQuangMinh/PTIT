#include<stdio.h>
#include<math.h>
void solve(int test){
	int n;
	scanf("%d", &n);
	printf("Test %d:", test);
	int i;
	for (i=2;i<=sqrt(n);i++){
		int d=0;
		while (n%i==0){
			d++;
			n/=i;
		}
		if (d>0) printf(" %d(%d)", i, d);
	}
	if (n>1) printf(" %d(1)", n);
}
int main(){
	int t, i;
	scanf("%d", &t);
	for (i=1;i<=t;i++){
		solve(i);
		if (i!=t) printf("\n");
	}
}

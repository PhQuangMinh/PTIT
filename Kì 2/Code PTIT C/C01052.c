#include<stdio.h>
#include<math.h>
int solve(){
	int n;
	scanf("%d", &n);
	if (n%2==1) return 0;
	int dem=0;
	int i;
	n/=2;
	for (i=1;i<=sqrt(n);i++)
	    if (n%i==0) dem+=2;
	int k=sqrt(n);
	if (k*k==n) dem--;
	return dem;
}
int main(){
	int t;
	scanf("%d", &t);
	int i;
	for (i=1;i<=t;i++) printf("%d\n", solve());
}

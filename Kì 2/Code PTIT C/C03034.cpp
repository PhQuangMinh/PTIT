#include<stdio.h>
#include<math.h>
void solve(){
	int n;
	scanf("%d", &n);
	if (n%2==1){
		printf("0\n");
		return;
	}
	n/=2;
	int dem=0;
	for (int i=1;i<=sqrt(n);i++)
	    if (n%i==0) dem+=2;
	int k=sqrt(n);
	if (k*k==n) dem--;
	printf("%d\n", dem);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

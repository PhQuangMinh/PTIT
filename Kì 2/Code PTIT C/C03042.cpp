#include<stdio.h>
int check(int n){
	int du=n%10;
	n/=10;
	while (n!=0){
		int du1=n%10;
		if (du>=du1) return 0;
		du=du1;
		n/=10;
	}
	return 1;
}
void solve(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b){
		int t=a;a=b;b=t;
	}
	int dem=0;
	for (int i=a;i<=b;i++)
	    if (check(i)) dem++;
	printf("%d", dem);
}
int main(){
	int t;
	scanf("%d", &t);
	for (int i=1;i<=t;i++){
		solve();
		if (i!=t) printf("\n");
	}
}

#include<stdio.h>
#include<math.h>
int check(int x){
	int t=x%10;
	x/=10;
	while (x!=0){
		if(t<x%10) return 0;
		t=x%10;
		x/=10;
	}
	return 1;
}
void solve(){
	int n;
	scanf("%d", &n);
	int dau=pow(10, n-1);
	int cuoi=pow(10, n);
	for (int i=dau;i<cuoi;i++)
	    if (check(i)) printf("%d ", i);
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

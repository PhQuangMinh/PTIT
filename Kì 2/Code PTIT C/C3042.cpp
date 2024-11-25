#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int x){
	int k=x%10;
	x/=10;
	while (x!=0){
		if (x%10<=k) return 0;
		k=x%10;
		x/=10;
	}
	return 1;
}
void solve(){
	int a, b;
	scanf("%d%d", &a, &b);
	int dem=0;
	for (int i=a;i<=b;i++)
	    if (check(i)) dem++;
	printf("%d\n", dem);
}
int main(){
	int n;
	scanf("%d", &n);
	while (n--) solve();
}

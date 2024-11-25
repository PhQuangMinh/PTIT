#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int n){
	int t=0;
	int sum=0;
	int x=n;
	int dem6=0;
	while (x!=0){
		int k=x%10;
		if (k==6) dem6++;
		t=t*10+k;
		sum+=k;
		x/=10;
	}
	if (n==t && sum%10==8 && dem6>0) return 1;
	return 0;
}
void solve(){
	int a, b;
	scanf("%d%d", &a, &b);
	if (a>b){
		int t=a;a=b;b=t;
	}
	int dem=0;
	for (int i=a;i<=b;i++) 
	    if (check(i)){
		    printf("%d ", i);
		}
}
int main(){
	solve();
}

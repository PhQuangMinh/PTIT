#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
	int n;
	scanf("%d", &n);
	int dem=0;
	while (n!=0){
		dem+=n/1000;n%=1000;
		dem+=n/500;n%=500;
		dem+=n/200;n%=200;
		dem+=n/100;n%=100;
		dem+=n/50;n%=50;
		dem+=n/20;n%=20;
		dem+=n/10;n%=10;
		dem+=n/5;n%=5;
		dem+=n/2;n%=2;
		dem+=n/1;n%=1;
	}
	printf("%d\n", dem);
}
int main(){
    int t;
	scanf("%d", &t);
	while (t--) solve();
}

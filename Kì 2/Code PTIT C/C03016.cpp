#include<stdio.h>
#include<math.h>
#include<string.h>
long long f[100];
void fibonaci(){
	f[0]=0;
	f[1]=1;
	for (int i=2;i<=92;i++) f[i]=f[i-1]+f[i-2];
}
void solve(){
	long long n;
	scanf("%lld", &n);
    for (int i=0;i<=92;i++)
        if (f[i]==n){
        	printf("YES\n");
        	return;
		}
	printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	fibonaci();
	while (t--) solve();
}

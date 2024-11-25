#include<stdio.h>
#include<math.h>
#include<string.h>
long long f[100];
void fibonaci(){
	f[1]=1;
	f[2]=1;
	for (int i=3;i<=92;i++)
	    f[i]=f[i-1]+f[i-2];
}
void solve(){
    int n;
    scanf("%d", &n);
    printf("%lld\n", f[n]);
}
int main(){
	int n;
	scanf("%d", &n);
	fibonaci();
	while (n--) solve();
}

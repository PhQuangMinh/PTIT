#include<stdio.h>
#include<string.h>
#include<math.h>
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=1;i<=n;i++) scanf("%d", &a[i]);
	int max=a[1];
	int tong=0;
	for (int i=1;i<=n;i++){
		tong=tong+a[i];
		if (a[i]>tong) tong=a[i];
		if (tong>max) max=tong;
	}
	printf("%d\n", max);
}
int main(){
    int t;
	scanf("%d", &t);
	while (t--) solve();
}

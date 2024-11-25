#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int n, int a[]){
	for (int i=1;i<=n/2;i++)
	    if (a[i]!=a[n-i+1]) return 0;
	return 1;
}
void solve(){
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i=1;i<=n;i++) scanf("%d", &a[i]);
    if (check(n, a)) printf("YES");
    else printf("NO");
	printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	while (n--) solve();
}

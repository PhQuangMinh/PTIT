#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[1000], b[1000];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
	for (int i=0;i<m;i++) scanf("%d", &b[i]);
	int p;
	scanf("%d", &p);
	for (int i=n;i<n+m;i++) a[i]=a[i-m];
	n+=m ;
	for (int i=0;i<m;i++) a[i+p]=b[i];
	for (int i=0;i<n;i++) printf("%d ", a[i]);
}
int main(){
	solve();
}

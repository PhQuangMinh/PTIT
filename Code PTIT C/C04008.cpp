#include<stdio.h>
#include<math.h>
#include<string.h>
int d=1;
void solve(){
    int n, m, p;
    scanf("%d%d%d", &n, &m, &p);
    int a[1000], b[1000];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
	for (int i=0;i<m;i++) scanf("%d", &b[i]);
	printf("Test %d:\n", d);
	for (int i=0;i<p;i++) printf("%d ", a[i]);
	for (int i=0;i<m;i++) printf("%d ", b[i]);
	for (int i=p;i<n;i++) printf("%d ", a[i]);
	printf("\n");
	d++;
}
int main(){
	int n;
	scanf("%d", &n);
    while (n--) solve();
}

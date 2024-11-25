#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	int ok=1;
	int d[30005]={};
	int max=0;
	for (int i=1;i<=n;i++){
	    scanf("%d", &a[i]);
	    d[a[i]]++;
	    if (d[a[i]]>max) max=d[a[i]];
	}
    for (int i=1;i<=n;i++)
	    if (d[a[i]]==max) {
			printf("%d ", a[i]);
			d[a[i]]=0;
		}
	printf("\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    int count=1;
    int max=a[0];
	for (int i=1;i<n;i++){
	    if (a[i]>=max) count++;
	    if (a[i]>max) max=a[i];
	}
	printf("%d\n", count);
}
int main(){
    int n;
	scanf("%d", &n);
    while (n--) solve();
}

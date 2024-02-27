#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    for (int i=0;i<n/2;i++){
    	int t=a[n-i-1];
    	a[n-i-1]=a[i];
    	a[i]=t;
	}
	for (int i=0;i<n;i++) printf("%d ", a[i]);
}
int main(){
    solve();
}

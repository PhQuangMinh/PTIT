#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=1;i<=n;i++) 
	   scanf("%d", &a[i]);
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        if (a[i]==a[j]){
	        	printf("%d\n", a[i]);
	        	return;
			}
	printf("NO\n");
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

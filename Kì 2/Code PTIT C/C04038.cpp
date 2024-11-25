#include<stdio.h>
#include<string.h>
#include<math.h>
void in(int n, int a[]){
	for (int i=1;i<=n;i++) printf("%d ", a[i]);
	printf("\n");
}
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=1;i<=n;i++) scanf("%d", &a[i]);
	for (int i=1;i<n;i++){
		int min=i;
	    for (int j=i+1;j<=n;j++)
	        if (a[min]>a[j])
	            min=j;
		if (min!=i){
			int t=a[i];a[i]=a[min];a[min]=t;
		}
		in(n, a);
	}
}
int main(){
	solve();
}

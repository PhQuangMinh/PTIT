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
		for (int j=i+1;j<=n;j++)
		    if (a[i]>a[j]){
		    	int t=a[i];a[i]=a[j];a[j]=t;
			}
		printf("Buoc %d: ", i);
		in(n, a);
	}
}
int main(){
	solve();
}

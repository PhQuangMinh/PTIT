#include<stdio.h>
#include<string.h>
#include<math.h>
void in(int n, int a[]){
	for (int i=0;i<n;i++) printf("%d ", a[i]);
	printf("\n");
}
void solve(){
	int n;
	scanf("%d", &n);
	int a[n+5];
	for (int i=0;i<n;i++) scanf("%d", &a[i]);
	for (int i=0;i<n-1;i++){
		int check=0;
		for (int j=0;j<n-i-1;j++)
		    if (a[j]>a[j+1]){
		    	int t=a[j];a[j]=a[j+1];a[j+1]=t;
		    	check=1;
			}
		if (!check) break;
		printf("Buoc %d: ", i+1);
		in(n, a);
	}
}
int main(){
	solve();
}

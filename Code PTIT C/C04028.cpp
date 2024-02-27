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
	int k=1;
	for (int i=2;i<=n;i++){
		in(i, a);
		int x=a[i], pos=i-1;
		while (x<a[pos] && pos>=1){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
		k++;
	}
}
int main(){
	solve();
}

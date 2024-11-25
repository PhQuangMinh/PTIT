#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    int max1=-1000000000, max2;
	for (int i=0;i<n;i++){
		if (max1<a[i]){
			max2=max1;
			max1=a[i];
		}
		if (max2<a[i] && a[i]<max1) max2=a[i];
	}
	printf("%d %d", max1, max2);
}
int main(){
	solve();
}

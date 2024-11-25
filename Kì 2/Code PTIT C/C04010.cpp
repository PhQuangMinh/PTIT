#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d", &n);
    int a[n+5];
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    int min1=a[0], min2;
	for (int i=0;i<n;i++){
		if (min1>a[i]){
			min2=min1;
			min1=a[i];
		}
		if (min2>a[i] && a[i]>min1) min2=a[i];
	}
	printf("%d %d", min1, min2);
}
int main(){
	solve();
}

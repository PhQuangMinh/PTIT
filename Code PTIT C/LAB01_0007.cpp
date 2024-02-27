#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	int sum=0;
	for (int i=1;i<=n;i++){
		int x;
		scanf("%d", &x);
		sum+=x;
	}
	printf("%.3f", (float)sum/n);
}
int main(){
   solve();
}

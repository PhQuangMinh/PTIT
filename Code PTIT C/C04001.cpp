#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
    	int x;
    	scanf("%d", &x);
    	if (x%2==0) printf("%d ", x);
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	while (n--) solve();
}

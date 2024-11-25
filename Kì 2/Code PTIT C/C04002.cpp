#include<stdio.h>
#include<math.h>
#include<string.h>
int snt(int x){
	for (int i=2;i<=sqrt(x);i++)
	    if (x%i==0) return 0;
	return x>1;
}
void solve(){
    int n;
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
    	int x;
    	scanf("%d", &x);
    	if (snt(x)) printf("%d ", x);
	}
	printf("\n");
}
int main(){
	int n;
	scanf("%d", &n);
	while (n--) solve();
}

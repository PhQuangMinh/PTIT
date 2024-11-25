#include<stdio.h>
#include<math.h>
#include<string.h>
void solve(){
	int n;
	scanf("%d", &n);
	int d=0;
	for (int i=1;i<=n;i++){
		d+=i;
	    if (i%2==1){
	    	for (int j=d-i+1;j<=d;j++) printf("%d ", j);
		}
		else
		    for (int j=d;j>=d-i+1;j--) printf("%d ", j);
		if (i!=n) printf("\n");
	}
}
int main(){
	solve();
}

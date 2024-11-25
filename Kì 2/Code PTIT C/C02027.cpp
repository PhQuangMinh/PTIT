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
	    	for (int j=d-i+1;j<=d;j++) printf("%c ", j+96);
		}
		else
		    for (int j=d;j>=d-i+1;j--) printf("%c ", j+96);
		if (i!=n) printf("\n");
	}
}
int main(){
	solve();
}

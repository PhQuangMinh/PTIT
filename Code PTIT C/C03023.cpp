#include<stdio.h>
#include<math.h>
#include<string.h>
int check(int n){
	int x=n;
	int t=0;
	while (x!=0){
		if (x%10==9) return 0;
		t=t*10+x%10;
		x/=10;
	}
	if (t==n) return 1;
	return 0;
}
void solve(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for (int i=2;i<n;i++) 
	    if (check(i)){
		    printf("%d ", i);
		    dem++;
		}
	printf("\n%d", dem);
}
int main(){
	solve();
}

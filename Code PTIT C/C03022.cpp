#include<stdio.h>
#include<math.h>
#include<string.h>
int snt(int x){
	for (int i=2;i*i<=x;i++)
	    if (x%i==0) return 0;
	return x>1;
}
int check(int n){
	int sum=0;
	int x=n;
	while (x!=0){
		int k=x%10;
		sum+=k;
		x/=10;
	}
	if (snt(n) && sum%5==0) return 1;
	return 0;
}
void solve(){
	int n;
	scanf("%d", &n);
	int dem=0;
	for (int i=1;i<=n;i++) 
	    if (check(i)){
		    printf("%d ", i);
		    dem++;
		}
	printf("\n%d", dem);
}
int main(){
	solve();
}

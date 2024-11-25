#include<stdio.h>
#include<math.h>
long long thaythe(long long x, int a, int b){
	int k=0;
	long long tmp=0;
	while(x){
		long long add=pow(10,k);
		int t=x%10;
		if(t==a) tmp+=b*add;
		else tmp+=t*add;
		k++; 
		x/=10;
	}
	return tmp;
}
void solve(){
	long long a, b;
	scanf("%lld%lld", &a, &b);
	long long min=thaythe(a, 6, 5)+thaythe(b, 6, 5);
	long long max=thaythe(a, 5, 6)+thaythe(b, 5, 6);
	printf("%lld %lld\n", min, max);
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--) solve();
}

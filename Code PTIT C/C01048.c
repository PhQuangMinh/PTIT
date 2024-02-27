#include<stdio.h>
void solve(int n){
	int chan=0, le=0;
	int k=n;
	while (k!=0){
		int t=k%10;
		if (t%2==0) chan++;
		else le++;
		k/=10;
	}
	printf("%d %d", le, chan);
}
int main(){
	int n;
	scanf("%d", &n);
	solve(n);
}

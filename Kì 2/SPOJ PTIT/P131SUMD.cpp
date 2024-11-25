#include<bits/stdc++.h>
using namespace std;
long long thaythe(long long x, int check){
	long long t=0;
	long long d=1;
	while (x!=0){
		int k=x%10;
		if (check==1 && k==5) k=6;
		if (check==0 && k==6) k=5;
		t=t+k*d;
		d*=10;
		x/=10;
	}
	return t;
}
void solve(){
	long long a, b;
	cin >> a >> b;
	long long min=thaythe(a, 0)+thaythe(b, 0);
	long long max=thaythe(a, 1)+thaythe(b, 1);
	cout << min << " " << max;
}
int main(){
    solve();
} 
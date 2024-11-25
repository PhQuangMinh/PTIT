#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
long long ucln(long long a, long long b){
	long long t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
void solve(){
	long long a, x, y;
	cin >> a >> x >> y;
	long long kq=ucln(x, y);
	for (int i=1;i<=kq;i++) cout << a;
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
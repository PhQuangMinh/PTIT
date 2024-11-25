#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	int dt=sqrt((long long)a*b*c);
	int c1=dt/a;
	int c2=dt/b;
	int c3=dt/c;
	cout << (c1+c2+c3)*4 << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long f[2000];
void fibo(){
	f[0]=0;
	f[1]=1;
	for (int i=2;i<=1000;i++)
	    f[i]=((f[i-1]%mod)+(f[i-2]%mod))%mod;
}
void solve(){
	int n;
	cin >> n;
	cout << f[n] << "\n";
}
int main(){
	faster();
	fibo();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
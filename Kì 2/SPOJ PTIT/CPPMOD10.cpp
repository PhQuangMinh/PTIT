#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int mod=1e9+7;
void solve(){
	int n, x;
	cin >> n >> x;
	int a[n+5];
	for (int i=n;i>=1;i--) cin >> a[i];
	if (x==0){
		cout << 0 << "\n";
		return;
	}
	long long d=1;
	long long kq=0;
	for (int i=1;i<=n;i++){
		kq+=((long long)a[i]*d)%mod;
		kq%=mod;
		d*=x;
		d=d%mod;
	}
	cout << kq << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
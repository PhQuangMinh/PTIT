#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string s;
    cin >> s;
	long long sum=0;
	int n=s.size();
	long long sumcs=0;
	for (int i=n-1;i>=0;i--){
		int k=s[i]-'0';
		sumcs+=k*(i+1);
	}
	long long t=1;
	for (int i=1;i<=n;i++){
		long long tong=sumcs*t;
		sum=sum+tong;
		t*=10;
		int k=s[n-i]-'0';
		sumcs=sumcs-k*(n-i+1);
	}
	cout << sum;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
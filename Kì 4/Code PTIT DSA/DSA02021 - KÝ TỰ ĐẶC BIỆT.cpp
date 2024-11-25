#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
char Try(ll k, ll n, string s){
    if (k<s.size()) return s[k];
    if (k==n/2) return Try(k-1, n/2, s);
    if (k<n/2) return Try(k, n/2, s);
    return Try(k-1-n/2, n/2, s);
}
void solve(){
    string s;
    ll k;
    cin >> s >> k;
    ll n = s.size();
    k--;
    while (n<=k) n*=2;
    cout << Try(k, n, s);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
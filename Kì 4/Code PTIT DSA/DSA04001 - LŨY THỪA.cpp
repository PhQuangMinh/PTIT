#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
ll lt(ll n, ll k){
    if (k==0) return 1;
    ll tmp = lt(n, k/2)%mod;
    tmp = (tmp*tmp)%mod;
    if (k%2) tmp = (tmp*n)%mod;
    return tmp;
}
void solve(){
    ll n, k;
    cin >> n >> k;
    cout << lt(n, k);
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
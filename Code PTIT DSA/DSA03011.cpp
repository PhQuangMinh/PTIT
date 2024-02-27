#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, k;
void solve(){
    cin >> n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    for (int i=1;i<=n;i++){
        ll x;
        cin >> x;
        pq.push(x);
    }
    ll ans = 0;
    while (pq.size()>1){
        ll tmp1 = pq.top();
        pq.pop();
        ll tmp2 = pq.top();
        pq.pop();
        ll x = (tmp1+tmp2)%mod;
        ans +=x;
        ans%=mod;
        pq.push(x);
    }
    cout << ans;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    ll cnt = 0;
    a[n+1] = mod;
    for (int i=1;i<n;i++){
        int tmp = lower_bound(a+i+1, a+n+1, a[i]+k) - a;
        cnt+=tmp-i-1;
    }
    cout << cnt;
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
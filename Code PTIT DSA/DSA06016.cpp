#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int ma = -1e9;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        ma = max(ma, x);
    }
    int mi = 1e9;
    for (int i=1;i<=m;i++){
        int x;
        cin >> x;
        mi = min(x, mi);
    }
    cout << 1ll*mi*ma;
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
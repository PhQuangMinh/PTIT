#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    int beg=1e9, en=-1e9;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp[x]++;
        beg = min(beg, x);
        en = max(en, x);
    }
    int ans = 0;
    for (int i=beg;i<=en;i++){
        if (mp[i]==0) ans++;
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
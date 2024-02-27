#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, x;
    cin >> n >> x;
    map<int, int> mp;
    for (int i=1;i<=n;i++){
        int k;
        cin >> k;
        mp[k]++;
    }
    if (mp[x]) cout << mp[x];
    else cout << -1;
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
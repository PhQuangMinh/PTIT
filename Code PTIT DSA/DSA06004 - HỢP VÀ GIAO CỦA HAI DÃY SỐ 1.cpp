#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> hop, giao;
    map<int, int> mp;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        mp[x]++;
        hop.push_back(x);
    }
    for (int i=1;i<=m;i++){
        int x;
        cin >> x;
        if (mp[x]) giao.push_back(x);
        else hop.push_back(x);
    }
    sort(hop.begin(), hop.end());
    for (auto x:hop) cout << x << " ";
    cout << "\n";
    for (auto x:giao) cout << x << " ";
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
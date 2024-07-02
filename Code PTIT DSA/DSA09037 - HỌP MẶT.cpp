#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, m, k;
vector<vector<int>> a;
vector<int> pos;
int ok;
vector<bool> vs;
void dfs(int u, int des){
    vs[u] = true;
    if (u==des) ok = 1;
    if (ok) return;
    for (auto v:a[u]){
        if (!vs[v]){
            dfs(v, des);
        }
    }
}
void solve(){
    cin >> k >> n >> m;
    a.assign(n+10, {});
    for (int i=1;i<=k;i++){
        int x;
        cin >> x;
        pos.push_back(x);
    }
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    int ans = 0;
    for (int i=1;i<=n;i++){
        for (auto x:pos){
            ok = 0;
            vs.assign(n+5, false);
            dfs(x, i);
            if (ok==0) break;
        }
        if (ok){
            // cout << i << ' ';
            ans++;
        }
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
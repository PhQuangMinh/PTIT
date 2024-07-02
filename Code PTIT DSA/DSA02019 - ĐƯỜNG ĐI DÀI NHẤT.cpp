#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, m;
vector<vector<int>> a;
bool vs[25][25];
int ans;
void dfs(int u, int s){
    ans = max(ans, s);
    for (auto it:a[u]){
        if (!vs[u][it]){
            vs[u][it] = vs[it][u] = true;
            dfs(it, s+1);
            vs[u][it] = vs[it][u] = false;
        }
    }
}
void solve(){
    cin >> n >> m;
    a.assign(n+1, {});
    for (int i=1;i<=m;i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    ans = 0;
    for(int i=0;i<n;i++){
        dfs(i, 0);
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
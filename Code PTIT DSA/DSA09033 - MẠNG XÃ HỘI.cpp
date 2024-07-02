#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[100001];
bool visited[100001];
void dfs(int u){
    visited[u] = true;
    for (auto v:vt[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}
void solve(){
    cin >> n >> m;
    for (int i=1;i<=n;i++) vt[i].clear();
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        vt[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
    dfs(1);
    int cnt =0;
    for (int i=2;i<=n;i++){
        if (!visited[i]){
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
#include<bits/stdc++.h>
using namespace std;
int n, m, v, par[1001];
vector<int> vt[1001];
bool visited[1001];
void bfs(int u){
    queue<int> qu;
    qu.push(u);
    visited[u] = true;
    while (!qu.empty()){
        int u = qu.front();
        qu.pop();
        for (auto x:vt[u]){
            if (!visited[x]){
                par[x] = u; 
                visited[x] = true;
                qu.push(x);
            }
        }
    }
}
void solve(){
    int u;
    cin >> n >> m >> u >> v;
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
    }
    for (int i=1;i<=n;i++){
        sort(vt[i].begin(), vt[i].end());
    }
    memset(visited, false, sizeof(visited));
    memset(par, -1, sizeof(par));
    bfs(u);
    if (par[v] == -1) cout << -1;
    else{
        vector<int> ans;
        while (par[v]!=-1){
            ans.push_back(v);
            v = par[v];
        }
        ans.push_back(u);
        reverse(ans.begin(), ans.end());
        for (auto x:ans) cout << x << ' ';
    }
    for (int i=1;i<=n;i++) vt[i].clear();
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
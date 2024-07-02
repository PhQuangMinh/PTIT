#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[10001];
int visited[10001];
int parent[10001];
int in[10001];
void init(){
    cin >> n >> m;
    for (int i=1;i<=n;i++) vt[i].clear();
    memset(parent, -1, sizeof(parent));
    memset(in, 0, sizeof(in));
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        in[y]++;
    }
    memset(visited, false, sizeof(visited));
}
int dfs(int u){
    visited[u] = 1;
    for (auto v:vt[u]){
        if (!visited[v]){
            parent[v] = u;
            if(dfs(v)) return 1;
        }
        else
            if (visited[v]==1) return 1;
    }
    visited[u] = 2;
    return 0;
} 
void kahn(){
    queue<int> qu;
    for (int i=1;i<=n;i++){
        if (in[i]==0){
            qu.push(i);
        }
    }
    vector<int> topo;
    while (!qu.empty()){
        int u = qu.front();
        qu.pop();
        topo.push_back(u);
        for (auto v:vt[u]){
            in[v]--;
            if (in[v]==0){
                qu.push(v);
            }
        }
    }
    if (topo.size()!=n) cout << "NO";
    else cout << "YES";
}
void solve(){
    init();
    for (int i=1;i<=n;i++){
        if (!visited[i]){
            if (dfs(i)){
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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
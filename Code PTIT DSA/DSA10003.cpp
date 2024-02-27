#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[10001];
bool visited[10001];
int parent[10001];
void init(){
    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    cin >> n >> m;
    for (int i=1;i<=n;i++) vt[i].clear();
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        vt[y].push_back(x);
    }
}
int dfs(int u, int par){
    visited[u] = true;
    for (auto v:vt[u]){
        if (!visited[v]){
            if(dfs(v, u)) return 1;
        }
        else
            if (v!=par) return 1;
    }
    return false;
} 
bool bfs(int u){
    queue<int> qu;
    qu.push(u);
    while (!qu.empty()){
        int u = qu.front();
        visited[u]=true;
        qu.pop();
        for (auto x:vt[u]){
            if (!visited[x]){
                qu.push(x);
                parent[x] = u;
            }
            else{
                if (x!=parent[u]) return true;
            }
        }
    }
    return false;
}
void solve(){
    init();
    for (int i=1;i<=n;i++){
        if (!visited[i]){
            if (bfs(i)){
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
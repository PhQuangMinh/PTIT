#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[1001], r_vt[1001];
bool visited[1001];
stack<int> topo;
int in[1001];
void init(){
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        r_vt[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
void dfs1(int u){
    visited[u] = true;
    for (auto v:vt[u]){
        if (!visited[v]){
            dfs1(v);
        }
    }
    topo.push(u);
}
void dfs2(int u){
    visited[u] = true;
    cout << u << ' ';
    for (auto v:r_vt[u]){
        if (!visited[v]){
            dfs2(v);
        }
    }
}
void solve(){
    memset(visited, false, sizeof(visited));
    init();
    for (int i=1;i<=n;i++){
        if (!visited[i]){
            dfs1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    while (!topo.empty()){
        int u = topo.top();
        topo.pop();
        if (!visited[u]){
            dfs2(u);
            cout << "\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
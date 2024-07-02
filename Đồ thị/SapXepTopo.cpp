#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[1001];
bool visited[1001];
vector<int> topo;
void init(){
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}
void dfs(int u){
    visited[u] = true;
    for (auto v:vt[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
    topo.push_back(u);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    for (int i=1;i<=n;i++){
        if (!visited[i]){
            dfs(i);
        }
    }
    reverse(topo.begin(), topo.end());
    for (auto x:topo) cout << x << ' ';
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, m;
int a[1005][1005];
vector<vector<int>> e;
bool vs[1005];
bool dfs(int u){
    vs[u] = true;
    queue<pair<int, int>> qu;
    qu.push({u, 0});
    while (!qu.empty()){
        pair<int, int> tmp = qu.front();
        qu.pop();
        for (auto x:e[tmp.first]){
            if (!vs[x]){
                vs[x] = true;
                qu.push({x, tmp.second + a[tmp.first][x]});
            }
            else if (x==u && tmp.second+a[tmp.first][x]<0){
                return true;
            }
        }
    }
    return false;
}
void solve(){
    cin >> n >> m;
    e.clear();
    e.resize(n+1);
    for (int i=1;i<=m;i++){
        int u, v, w;
        cin >> u >> v >> w;
        a[u][v] = w;
        e[u].push_back(v);
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) vs[j] = 0;
        if (dfs(i)){
            cout << 1;
            return;
        }
    }
    cout << 0;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
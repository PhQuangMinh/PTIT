#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> vt[10001];
bool visited[10001];
vector<pair<int, int>> ds;
void dfs(int u){
    visited[u] = true;
    for (auto v:vt[u]){
        if (!visited[v]){
            dfs(v);
        }
    }
}
void dfs1(int u, int s, int t){
    visited[u] = true;
    for (auto v:vt[u]){
        if (u==s && v==t || u==t && v==s) continue;
        if (!visited[v]){
            dfs1(v, s, t);
        }
    }
}
void solve(){
    int u;
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        vt[y].push_back(x);
        ds.push_back({x, y});
    }
    for (int i=1;i<=n;i++){
        sort(vt[i].begin(), vt[i].end());
    }
    sort(ds.begin(), ds.end());
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    for (int i=1;i<=n;i++){
        if (!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    for (auto it:ds){
        memset(visited, false, sizeof(visited));
        int dem = 0;
        for (int j=1;j<=n;j++){
            if (!visited[j]){
                dfs1(j, it.first, it.second);
                dem++;
            }
        }
        if (dem>cnt){
            if (it.first>it.second) swap(it.first, it.second);
            cout << it.first << ' ' << it.second << ' ';
        }
    }
    ds.clear();
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
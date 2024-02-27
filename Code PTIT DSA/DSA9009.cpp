#include<bits/stdc++.h>
using namespace std;
int n, m, u;
vector<int> vt[10001];
bool visited[10001];
void bfs(int u){
    queue<int> qu;
    qu.push(u);
    visited[u] = true;
    while (!qu.empty()){
        int u = qu.front();
        qu.pop();
        for (auto x:vt[u]){
            if (!visited[x]){
                visited[x] = true;
                qu.push(x);
            }
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
    }
    for (int i=1;i<=n;i++){
        sort(vt[i].begin(), vt[i].end());
    }
    memset(visited, false, sizeof(visited));
    int cnt = 0;
    for (int i=1;i<=n;i++){
        if (!visited[i]){
            bfs(i);
            cnt++;
        }
    }
    cout << cnt;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, m;
vector<vector<int>> a;
int col[1005];
bool bfs(int u){
    queue<int> qu;
    qu.push(u);
    col[u] = 0;
    while (!qu.empty()){
        int u = qu.front();qu.pop();
        for (auto v:a[u]){
            if (col[v]==-1){
                col[v] = 1-col[u];
                qu.push(v);
            }else{
                if (col[v]==col[u]) return false;
            }
        }
    }
    return true;
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
    memset(col, -1, sizeof(col));
    for (int i=1;i<=n;i++)
        if (col[i]==-1){
            if (!bfs(i)){
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
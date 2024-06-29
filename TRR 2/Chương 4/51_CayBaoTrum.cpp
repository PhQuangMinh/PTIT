#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n;
int a[20][20];
vector<pair<int, int>> ans;
bool vs[25];
void dfs(int u){
    vs[u] = true;
    if (ans.size()==n-1) return;
    for (int i=1;i<=n;i++){
        if (a[u][i] && !vs[i]){
            if (u<i) ans.push_back({u, i});
            else ans.push_back({i, u});
            dfs(i);
        }
    }
}
void bfs(int u){
    ans.clear();
    queue<int> qu;
    qu.push(u);
    for (int i=1;i<=n;i++) vs[i] = false;
    vs[u] = true;
    while (!qu.empty()){
        u = qu.front();
        qu.pop();
        for (int i=1;i<=n;i++){
            if (a[u][i] && !vs[i]){
                vs[i] = true;
                qu.push(i);
                if (u<i) ans.push_back({u, i});
                else ans.push_back({i, u});
            }
        }
    }
    cout << "BFS tree\n";
    for (auto it:ans) cout << it.first << ' ' << it.second << '\n';
}
int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin >> n;
    int u=5;
    // cin >> u;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    }
    for (int i=1;i<=n;i++) vs[i] = false;
    dfs(u);
    cout << "DFS tree\n";
    for (auto it:ans) cout << it.first << ' ' << it.second << '\n';
    bfs(u);
}
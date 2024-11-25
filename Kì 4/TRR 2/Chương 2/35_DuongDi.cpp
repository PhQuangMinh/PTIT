#include<iostream>
#include<queue>
#include<string.h>
using namespace std;
int n;
int a[20][20], b[20][20];
bool vs[20];
bool ok;
int pre[20];

void dfs(int u, int v){
    vs[u] = true;
    for (int i=1;i<=n;i++){
        if (a[u][i] && !vs[i]){
            vs[i] = true;
            pre[i]=u;
            dfs(i, v);
        }
    }
}
void bfs(int u, int v){
    memset(vs, false, sizeof(vs));
    memset(pre, 0, sizeof(pre));
    queue<int> qu;
    qu.push(u);
    vs[u] = true;
    while (!qu.empty()){
        u = qu.front();
        qu.pop();
        for (int i=1;i<=n;i++){
            if (a[u][i] && !vs[i]){
                pre[i] = u;
                vs[i] = true;
                qu.push(i);
            }
        }
    }
}
int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int u=11, v=13;
    // cin >> n >> u >> v;
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    ok = false;
    dfs(u, v);
    if (!vs[v]){
        cout << "no path";
        return 0;
    }
    int v1 = v;
    cout << "DFS path: ";
    while (v1!=u){
        cout << v1 << ' ';
        v1 = pre[v1];
    }
    cout << u;
    cout << "\nBFS path: ";
    bfs(u, v);
     while (v!=u){
        cout << v << ' ';
        v = pre[v];
    }
    cout << u;
}
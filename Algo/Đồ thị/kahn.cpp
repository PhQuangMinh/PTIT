#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> vt[1001];
bool visited[1001];
vector<int> topo;
int in[1001];
void init(){
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        in[y]++;
    }
    memset(visited, false, sizeof(visited));
}
void kahn(){
    queue<int> qu;
    for (int i=1;i<=n;i++){
        if (in[i]==0){
            qu.push(i);
        }
    }
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
    for (auto x:topo) cout << x << ' ';
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    kahn();
}
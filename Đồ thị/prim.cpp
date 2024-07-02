#include<bits/stdc++.h>
using namespace std;
const int MAXN=1001;
int n, m;
vector<pair<int, int>> vt[MAXN];
bool visited[MAXN];
struct edge{
    int u, v, w;
};
void init(){
    cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x, y, w;
        cin >> x >> y >> w;
        vt[x].push_back({y, w});
        vt[y].push_back({x, w});
    }
    memset(visited, false, sizeof(visited));
}
void prim(int u){
    int d = 0;
    vector<edge> mst;
    visited[u] = true;
    while (mst.size()!= n-1){
        int min_w = INT_MAX;
        int x, y;
        for (int i=1;i<=n;i++){
            if (visited[i]){
                for (auto it:vt[i]){
                    if (!visited[it.first]){
                        if (it.second<min_w){
                            min_w = it.second;
                            y = i;
                            x = it.first;
                        }
                    }
                }
            }
        }
        mst.push_back({x, y, min_w});
        visited[x] = true;
        d+=min_w;
    }
    cout << d << "\n";
    for (auto it:mst){
        cout << it.u << ' ' << it.v << ' ' << it.w << '\n';
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    init();
    prim(1);
}
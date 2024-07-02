#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, m, u;
vector<vector<pair<int, int>>> a;
vector<bool> vs;
vector<int> d;
void difkstra(int u){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, u});
    d[u] = 0;
    while (!pq.empty()){
        pair<int, int> tmp = pq.top();
        pq.pop();
        u = tmp.second;
        if (tmp.first>d[u]) continue;
        for (auto it:a[tmp.second]){
            int v = it.first;
            int w = it.second;
            if (d[u]+w<d[v]){
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }
    for (int i=1;i<=n;i++) cout << d[i] << ' ';
}
void solve(){
    cin >> n >> m >> u;
    a.assign(n+1, {});
    vs.assign(n+1, false);
    d.assign(n+1, mod);
    for (int i=1;i<=m;i++){
        int u, v, w;
        cin >> u >> v >> w;
        a[u].push_back({v, w});
        a[v].push_back({u, w});
    }
    difkstra(u);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
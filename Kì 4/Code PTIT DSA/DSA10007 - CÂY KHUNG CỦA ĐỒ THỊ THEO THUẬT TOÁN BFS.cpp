#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
vector<vector<int>> a;
vector<pair<int, int>> ans;
vector<bool> vs;
void bfs(int u){
    queue<int> st;
    st.push(u);
    vs[u] = true;
    while (!st.empty()){
        u = st.front();
        st.pop();
        for (auto x:a[u]){
            if (!vs[x]){
                ans.push_back({u, x});
                st.push(x);
                vs[x] = true;
            }
        }
    }
}
void solve(){
    int n, m, u;
    cin >> n >> m >> u;
    a.assign(n+1, {});
    vs.assign(n+1, false);
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    ans.clear();
    bfs(u);
    for (int i=1;i<=n;i++) a[i].clear();
    if (ans.size()!=n-1){
        cout << "-1\n";
        return;
    }
    for (int i=1;i<=n;i++){
        if (!vs[i]){
            cout << "-1\n";
            return;
        }
    }
    for (auto it:ans){
        cout << it.first << ' ' << it.second << "\n";
    }
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
    }
}
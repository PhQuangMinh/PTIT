#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
vector<int> a[1005];
bool vs[1005];
bool ok;
void dfs(int u){
    for (auto v:a[u]){
        if (vs[v]){
            ok = true;
            return;
        }
        vs[v] = true;
        dfs(v);
    }
}
void solve(){
    int n;
    cin >> n;
    for (int i=1;i<n;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
    }
    memset(vs, 0, sizeof(vs));
    ok = false;
    for (int i=1;i<=n;i++){
        if (!vs[i] && !ok){
            vs[i] = true;
            dfs(i);
        }
    }
    if (ok) cout << "NO";
    else cout << "YES";
    for (int i=1;i<=n;i++) a[i].clear();
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
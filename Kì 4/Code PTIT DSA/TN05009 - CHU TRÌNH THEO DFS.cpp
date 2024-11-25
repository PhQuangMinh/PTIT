#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> vt[n+5];
    for (int i=1;i<=m;i++){
        int u, v;
        cin >> u >> v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }
    for (int i=1;i<=n;i++){
        sort(vt[i].begin(), vt[i].end());
    }
    stack<int> st;
    int check[n+5] = {}, par[n+5] = {};
    st.push(1);
    check[1] = 1;
    int ok = 0;
    while (!st.empty()){
        int u = st.top();
        st.pop();
        for (auto v:vt[u]){
            if (v==1 && par[u]!=1){
                ok = u;
                break;
            }
            if (!check[v]){
                check[v] = 1;
                st.push(u);
                st.push(v);
                par[v] = u;
                break;
            }
        }
        if (ok) break;
    }
    if (ok){
        vector<int> ans;
        ans.push_back(1);
        while (par[ok]!=0){
            ans.push_back(ok);
            ok = par[ok];
        }
        ans.push_back(1);
        reverse(ans.begin(), ans.end());
        for (auto x:ans) cout << x << ' ';
        return;
    }
    cout << "NO";
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
#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> a[3000];
int ans[2500];
bool vs[2500];
bool check;
void Try(int u, int cnt){
    if (check) return;
    if (cnt==n){
        check = true;
        return;
    }
    vs[u] = true;
    for (auto x:a[u]){
        if (!vs[x]){
            Try(x, cnt+1);
        }
    }
    vs[u] = false;
}
void hamilton(int u){
    memset(vs, sizeof(vs), false);
    Try(u, 1);
}
void solve(){
    cin >> n >> m;
    for (int i=1;i<=n;i++) a[i].clear();
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    check = false;
    for (int i=1;i<=n;i++){
        hamilton(i);
    }
    if (check) cout << 1;
    else cout << 0;
}
int main(){
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << '\n';
    } 
}
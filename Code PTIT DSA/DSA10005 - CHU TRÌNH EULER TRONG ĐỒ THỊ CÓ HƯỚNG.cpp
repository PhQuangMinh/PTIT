#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5] = {};
    for (int i=1;i<=m;i++){
        int u, v;
        cin >> u >> v;
        a[u]++;
        a[v]--;
    }
    for (int i=1;i<=n;i++){
        if (a[i]!=0){
            cout << 0;
            return;
        }
    }
    cout << 1;
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
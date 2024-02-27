#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    vector<int> a[n+5];
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i=1;i<=n;i++){
        sort(a[i].begin(), a[i].end());
        cout << i << ": ";
        for (auto x:a[i]) cout << x << ' ';
        cout << '\n';
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
        if (i!=t) cout << "\n";
    }
}
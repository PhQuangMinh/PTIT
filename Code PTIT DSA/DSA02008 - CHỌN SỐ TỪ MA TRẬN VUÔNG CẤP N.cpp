#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[n+5][n+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    int b[n+5];
    for (int i=1;i<=n;i++) b[i]=i;
    vector<vector<int>> ans;
    while (1){
        int sum = 0;
        for (int i=1;i<=n;i++)
            sum += a[i][b[i]];
        if (sum==k){
            vector<int> tmp;
            for (int i=1;i<=n;i++) tmp.push_back(b[i]);
            ans.push_back(tmp);
        }
        next_permutation(b+1, b+n+1);
        int ok = 0;
        for (int i=1;i<=n;i++){
            if (b[i]!=i) ok = 1;
        }
        if (!ok) break;
    }
    cout << ans.size() << '\n';
    for (auto x:ans){
        for (auto t:x) cout << t << ' ';
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i=1;i<=n;i++){
        int x, y;
        cin >> x >> y;
        a.push_back({x, y});
    }
    sort(a.begin(), a.end());
    int f[n+5] = {};
    int ans = 1;
    for (int i=0;i<n;i++){
        f[i] = 1;
        for (int j=0;j<i;j++){
            if (a[i].first>a[j].second){
                f[i] = max(f[i], f[j]+1);
            }
        }
        ans = max(ans, f[i]);
    }
    cout << ans;
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
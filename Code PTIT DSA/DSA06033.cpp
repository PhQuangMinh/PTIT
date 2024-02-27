#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> vt;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        vt.push_back({x, i});
    }
    sort(vt.begin(), vt.end());
    int ans = -1;
    int id = vt[0].second, val = vt[0].first;
    for (int i=1;i<n;i++){
        if (vt[i].first>val)
           ans = max(ans, vt[i].second-id);
        if (vt[i].second<id){
            id = vt[i].second;
            val = vt[i].first;
        }
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
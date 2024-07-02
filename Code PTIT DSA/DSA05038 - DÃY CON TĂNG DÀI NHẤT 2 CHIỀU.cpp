#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int cmp(pair<int, int> x, pair<int, int> y){
    if (x.first<y.first || x.first == y.first && x.second <y.second) return 1;
    return 0;
}
void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>> vt;
    for (int i=1;i<=n;i++){
        int x, y;
        cin >> x >> y;
        vt.push_back({x, y});
    }
    // sort(vt.begin(), vt.end());
    int f[n+5] = {};
    for (int i=0;i<n;i++){
        f[i] = 1;
        for (int j=0;j<i;j++){
            if (vt[i].first>vt[j].first && vt[i].second>vt[j].second){
                f[i] = max(f[j]+1, f[i]);
            }
        }
    }
    for (int i=0;i<n;i++){
        cout << vt[i].first << ' ' << vt[i].second << ' ' << f[i] << '\n';
    }
    cout << *max_element(f, f+n);
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
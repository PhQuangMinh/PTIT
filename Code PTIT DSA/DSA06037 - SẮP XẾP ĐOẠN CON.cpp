#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int fmin[n+5];
    fmin[n] = a[n];
    fmin[n+1] = a[n];
    for (int i=n-1;i>=1;i--)
        fmin[i] = min(a[i], fmin[i+1]);
    int ma = -mod;
    vector<int> ans;
    for (int i=1;i<n;i++){
        ma = max(ma, a[i]);
        if (ma<=fmin[i+1]) ans.push_back(i);
    }
    cout << ans.size() << '\n';
    for (auto i:ans) cout << i << ' ';  
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
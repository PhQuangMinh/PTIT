#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> ans;
    for (int i=1;i<=n+m;i++){
        int x;
        cin >> x;
        ans.push_back(x);
    }
    sort(ans.begin(), ans.end());
    cout << ans[k-1];
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
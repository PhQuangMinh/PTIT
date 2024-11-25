#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5]={};
    for (int i=1;i<=n;i++) cin >> a[i];
    int l[n+5]={}, r[n+5]={};
    for (int i=1;i<=n;i++){
        if (a[i]>a[i-1]) l[i] = l[i-1] + 1;
        else l[i] = 1;
    }
    for (int i=n;i>=1;i--){
        if (a[i]>a[i+1]) r[i] = r[i+1] + 1;
        else r[i] = 1;
    }
    int ans  = 0;
    for (int i=1;i<=n;i++){
        ans = max(ans, r[i]+l[i] -1);
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
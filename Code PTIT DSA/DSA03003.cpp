#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int n;
void solve(){
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    long long ans = 0;
    for (int i=1;i<=n;i++){
        ans +=(ll)(i-1)*a[i];
        ans%=mod;
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
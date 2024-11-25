#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int l[n+5], r[n+5];
    for (int i=1;i<=n;i++){
        l[i] = a[i];
        for (int j=1;j<i;j++)
            if (a[i]>a[j]){
                l[i] = max(l[i], l[j]+a[i]);
            }
    }
    for (int i=n;i>=1;i--){
        r[i] = a[i];
        for (int j=n;j>i;j--)
            if (a[i]>a[j]){
                r[i] = max(r[i], r[j]+a[i]);
            }
    }
    int ans = 0;
    for (int i=1;i<=n;i++){
        ans = max(ans, r[i]+l[i]-a[i]);
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
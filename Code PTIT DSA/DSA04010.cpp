#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void solve(){
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int sum = 0;
    int ans = 0;
    for (int i=1;i<=n;i++){
        sum+=a[i];
        sum = max(a[i], sum);
        ans = max(ans, sum);
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
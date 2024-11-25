#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, a[50], s;
int ans;
void Try(int k, int sum, int cnt){
    if (sum==s){
        ans = min(ans, cnt);
        return;
    }
    if (sum>s || k==n+1 || cnt>ans) return;
    Try(k+1, sum, cnt);
    Try(k+1, sum+a[k], cnt+1);
}
void solve(){
    cin >> n >> s;
    for (int i=1;i<=n;i++) cin >> a[i];
    a[n+1] = mod;
    ans = mod;
    sort(a+1, a+n+1);
    Try(1, 0, 0);
    if (ans<mod) cout << ans;
    else cout << -1;
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
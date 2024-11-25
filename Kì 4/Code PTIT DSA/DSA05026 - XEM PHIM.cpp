#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, c;
    cin >> c >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int f[c+5]={0};
    int ans = 0;
    f[0]=1;
    for (int i=1;i<=n;i++){
        for (int j=c;j>=a[i];j--){
            if (f[j]==0 && f[j-a[i]]==1){
                f[j]=1;
                ans = max(ans, j);
            }
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
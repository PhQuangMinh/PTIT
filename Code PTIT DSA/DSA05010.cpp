#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[n+5] = {};
    for (int i=1;i<=n;i++){
        cin >> a[i];
        a[i]%=k;
    }
    int f[n+5][k+5] = {};
    for (int i=1;i<k;i++)
        f[1][i] = -mod;
    f[1][a[1]] = 1;
    for (int i=2;i<=n;i++){
      for (int j=0;j<k;j++){
        f[i][j] = max(f[i-1][j], f[i-1][(j-a[i]+k)%k] + 1);
      }
    }
    cout << f[n][0];
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
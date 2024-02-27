#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5], b[n+5];
    int f[n+5][m+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int j=1;j<=n;j++) cin >> b[j];
    for (int i=0;i<=n;i++)
        for (int j=0;j<=m;j++)
            f[i][j] = 0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (j>=a[i]){
                f[i][j] = max(f[i-1][j], f[i-1][j-a[i]]+b[i]);
            }
            else f[i][j] = f[i-1][j];
        }
    }
    cout << f[n][m];
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
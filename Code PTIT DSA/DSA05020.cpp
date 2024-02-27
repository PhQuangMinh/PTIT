#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5][m+5];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    }
    int f[n+5][m+5] = {};
    int ans = 0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (i==1){
                f[i][j] = f[i][j-1]+a[i][j];
            }
            else{
                if (j==1){
                    f[i][j] = f[i-1][j] + a[i][j];
                }
                else
                    f[i][j] = min(f[i][j-1], min(f[i-1][j-1], f[i-1][j]))+a[i][j];
            }
        }
        cout << '\n';
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
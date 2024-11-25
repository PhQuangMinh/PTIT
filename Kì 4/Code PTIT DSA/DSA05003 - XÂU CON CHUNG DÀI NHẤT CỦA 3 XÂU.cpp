#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string x, y, z;
    int n, m, p;
    cin >> n >> m >> p;
    cin >> x >> y >> z;
    int f[n+5][m+5][p+5] = {};
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++)
            for (int k = 0;k<p;k++){
                if (x[i]==y[j] && x[i]==z[k]){
                    f[i+1][j+1][k+1] = f[i][j][k]+1;
                }
                else
                {
                    f[i+1][j+1][k+1] = max({f[i+1][j+1][k], f[i+1][j][k+1], f[i][j+1][k+1]});
                }
            }
    }
    cout << f[n][m][p]; 
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long f[1005][1005];
int mod = 1e9+7;
void CkN(){
    for (int i=0;i<=1005;i++){
        f[0][i] = 1;
        f[i][0] = 1;
    }
    f[0][0] = 0;
    for (int i=1;i<=1000;i++)
        for (int j=1;j<=i;j++)
            f[i][j] = (f[i-1][j-1] + f[i-1][j])%mod;
}
void solve(){
    int n, k;
    cin >> n >> k;
    cout << f[n][k];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    CkN();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
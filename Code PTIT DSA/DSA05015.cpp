#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll f[1005][1005];
void catalan(){
    for (int i=1;i<=1000;i++)
        f[i][1] = i;
    for (int i=2;i<=1000;i++){
        for (int j=2;j<=i;j++){
            f[i][j] = (f[i-1][j-1]*i)%mod;
        }
    }
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
    catalan();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
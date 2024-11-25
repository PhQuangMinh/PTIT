#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll f[105][50005];
void init(){
    for (int i=1;i<=9;i++) f[1][i] = 1;
    for (int i=2;i<=100;i++){
        for (int j=1;j<=50000;j++){
            for (int k = 0;k<=9;k++){
                if (j>=k){
                    f[i][j] += f[i-1][j-k];
                    f[i][j] %= mod;
                }
            }
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
    init();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
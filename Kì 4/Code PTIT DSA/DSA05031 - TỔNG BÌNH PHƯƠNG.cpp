#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int f[n+5] = {0};
    for (int i=1;i<=n;i++){
        f[i] = mod;
        for (int j = 1;j*j<=i;j++){
            if (f[i-j*j]!=mod){
                f[i] = min(f[i], f[i-j*j]+1);
            }
        }
    }
    cout << f[n];
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
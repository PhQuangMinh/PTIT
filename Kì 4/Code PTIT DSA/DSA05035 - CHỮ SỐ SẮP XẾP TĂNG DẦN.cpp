#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll a[15], f[105];
void init(){
    for (int i=1;i<=10;i++) a[i]=1;
    f[1] = 10;
    for (int i=2;i<=100;i++){
        for (int j = 1;j<=9;j++){
            ll tmp = 0;
            for (int k = j;k<=9;k++){
                tmp+= a[k];
            }
            a[j] = tmp;
            f[i] = (f[i]+tmp)%mod;
        }
    }
    for (int i=2;i<=100;i++){
        f[i] = (f[i]+f[i-1])%mod;
    }
}
void solve(){
    int n;
    cin >> n;
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
    init();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    ll a[n+5][m+5] = {};
    a[n+1][m] = 1;
    for (int i=n;i>=0;i--)
        for (int j=m;j>=0;j--){
            a[i][j] = a[i+1][j] + a[i][j+1];
        }
    cout << a[0][0];
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
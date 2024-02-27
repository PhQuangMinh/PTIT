#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long ans(ll x, ll y, ll m){
    if (y==0) return 1;
    ll tmp = ans(x, y/2, m)%m;
    tmp = (tmp*tmp)%m;
    if (y%2) tmp = (tmp*x)%m;
    return tmp;
}
void solve(){
    ll x, y, m;
    cin >> x >> y >> m;
    cout << ans(x, y, m);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
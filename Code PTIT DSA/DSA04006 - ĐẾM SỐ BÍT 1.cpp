#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;

ll f[100];

void init(){
    f[1] = 1;
    for (int i=2;i<=52;i++){
        f[i] = f[i-1]*2+1;
    }
}
int vt(ll n){
    for (int i=1;i<=51;i++){
        if (f[i]>=n) return i;
    }
}
ll cal(int tmp, ll n, ll i){
    if (tmp==1 || i==f[tmp-1]+1) return n%2;
    if (i<=f[tmp-1]) return cal(tmp-1, n/2, i);
    return cal(tmp-1, n/2, i-f[tmp-1]-1);
}
void solve(){
    ll n, l, r;
    cin >> n >> l >> r;
    ll ans = 0;
    int tmp = vt(n);
    for (ll i=l;i<=r;i++){
        ans+=cal(tmp, n, i);
    }
    cout << ans;
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
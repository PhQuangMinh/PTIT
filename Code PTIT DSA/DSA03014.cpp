#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
bool check(string x, string y){
    int id = 0;
    for (int i=0;i<y.size();i++){
        if (y[i]==x[id]) id++;
    }
    return id == x.size();
}
void solve(){
    ll n;
    cin >> n;
    int x = cbrt(n);
    for (int i=x;i>=1;i--){
        ll tmp = 1ll*i*i*i;
        if (check(to_string(tmp), to_string(n))){
            cout << tmp;
            return;
        }
    }
    cout << -1;
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
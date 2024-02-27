#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int convert(string s, int k){
    int ans = 0;
    int d = 1;
    for (int i=s.size()-1;i>=0;i--){
        ans += (s[i]-'0')*d;
        d*=k;
    }
    return ans;
}
void solve(){
    string a, b;
    cin >> a >> b;
    int x = convert(a, 2);
    int y = convert(b, 2);
    ll ans = 1ll*x*y;
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
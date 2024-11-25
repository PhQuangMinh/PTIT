#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string s;
    cin >> s;
    int ans = 1;
    int n = s.size();
    for (int i=0;i<n;i++){
        int d=1;
        for (int j=1;j<=n;j++){
            if (i-j<0 || i+j>=n || s[i+j]!=s[i-j]) break;
            d+=2;
        }
        ans = max(ans, d);
        d=0;
        for (int j=0;j<=n;j++){
            if (i-j<0 || i+j+1>=n || s[i-j]!=s[i+j+1]) break;
            d+=2;
        }
        ans = max(ans, d);
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
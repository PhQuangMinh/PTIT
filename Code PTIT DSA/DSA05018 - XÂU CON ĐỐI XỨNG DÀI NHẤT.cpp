#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int f[1005][1005];
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    memset(f, 0, sizeof(f));
     for (int i = 0; i < n; ++i) {
        f[i][i] = 1;
    }

    int ans = 1;
    for (int k = 1; k < n; ++k) {
        for (int i = 0; i < n - k; ++i) {
            int j = i + k;
            if (s[i] == s[j] && k == 1) f[i][j] = 1;
            else if (s[i] == s[j] && k > 1) f[i][j] = f[i + 1][j - 1];
            else f[i][j] = 0;
            if (f[i][j] == 1) {
                ans = max(ans, j - i + 1);
            }
        }
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
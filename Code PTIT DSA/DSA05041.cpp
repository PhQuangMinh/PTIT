#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    int f[n+5][n+5] = {};
    for (int i=0;i<n;i++) f[i][i] = 1;
    for (int i=2;i<=n;i++){
        for (int j=0;j<n-i+1;j++){
            int k = i+j-1;
            if (s[j]==s[k] && i==2){
                f[j][k] = 2;
            }
            else{
                if (s[j]==s[k]){
                    f[j][k] = f[j+1][k-1] + 2;
                }
                else{
                    f[j][k] = max(f[j+1][k], f[j][k-1]);
                }
            }
        }
    }
    cout << n-f[0][n-1];
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
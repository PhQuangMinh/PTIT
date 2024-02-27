#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int dx = 0;
    int dt = 0;
    for (int i=0;i<n;i++)
        if (s[i]=='X') dx++;
        else 
            if (s[i]=='T') dt++;
    for (int i=0;i<n;i++){
        if (i>=dx) break;
        if (s[i]!='X'){
            for (int j=dx;j<n;j++){
                if (s[j]=='X'){
                    swap(s[j], s[i]);
                    ans++;
                    break;
                }
            }
        }
    }
    for (int i=dx;i<n;i++){
        if (i>=dx+dt) break;
        if (s[i]!='T'){
            for (int j=dx+dt;j<n;j++)
                if (s[j]=='T'){
                    swap(s[j], s[i]);
                    ans++;
                    break;
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
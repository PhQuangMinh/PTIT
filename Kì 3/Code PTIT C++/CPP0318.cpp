#include<bits/stdc++.h>
using namespace std;
string solve(){
    string s;
    cin >> s;
    if (s[5]<s[6] && s[6]<s[7] && s[7]<s[9] && s[9]<s[10]) return "YES";
    if (s[5]==s[6] && s[6]==s[7] && s[7]== s[9] && s[9]==s[10]) return "YES";
    if (s[5]==s[6] && s[6]==s[7] && s[9]==s[10]) return "YES";
    int ok = 1;
    if (s[5]!='6' && s[5]!='8' || s[6]!='6' && s[6]!='8' || s[7]!='6' && s[7]!='8' || s[9]!='6' && s[9]!='8' || s[10]!='6' && s[10]!='8') ok = 0;
    if (ok) return "YES";
    return "NO";
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
        cout << solve();
        if (i!=n) cout << "\n";
    }
}
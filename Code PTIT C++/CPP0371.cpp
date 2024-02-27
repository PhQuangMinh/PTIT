#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i=0;i<s.size();i++)
        if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y')
            cout << "." << s[i];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    // int n;
    // cin >> n;
    // for (int i=1;i<=n;i++){
    //     solve();
    //     if (i!=n) cout << "\n";
    // }
    solve();
}
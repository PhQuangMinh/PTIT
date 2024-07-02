#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string s;
    cin >> s;
    string ans;
    ans.push_back(s[0]);
    for (int i = 1;i<s.size();i++){
        if (s[i]==s[i-1]) ans.push_back('0');
        else ans.push_back('1');
    }
    cout << ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
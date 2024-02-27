#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    for (int i=0;i<n;i++)
        if (s[i]<'0' || s[i]>'9') s[i]=' ';
    stringstream tach(s);
    string k;
    vector<string> tmp;
    while (tach >> k){
        tmp.push_back(k);
    }
    int ans=0;
    for (auto x:tmp){
        int n = stoi(x);
        ans = max(ans, n);
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
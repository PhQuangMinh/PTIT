#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s, t;
    getline(cin, s);
    cin >> t;
    stringstream ss(s);
    string k;
    vector<string> ans;
    while (ss >> k){
        if (k!=t) ans.push_back(k);
  //      cout << k << "\n";
    }
    for (int i=0;i<ans.size();i++){
        cout << ans[i];
        if (i!=ans.size()-1) cout << " ";
    }
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
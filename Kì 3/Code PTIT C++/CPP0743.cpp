#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    getline(cin, s);
    stringstream tach(s);
    string k;
    vector<string> ans;
    while (tach >> k){
        ans.push_back(k);
    }
    for (int i= ans.size()-1;i>=0;i--){
        cout << ans[i];
        if (i!=0) cout << " ";
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
    int n;
    cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
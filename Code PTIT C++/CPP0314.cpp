#include<bits/stdc++.h>
using namespace std;
void solve(){
    map<string, int> mp;
    vector<string>  ans;
    int n;
    cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++){
        string s;
        getline(cin, s);
        if (mp[s]==0){
            mp[s]=1;
            ans.push_back(s);
        }
    }
    cout << ans.size();
    
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
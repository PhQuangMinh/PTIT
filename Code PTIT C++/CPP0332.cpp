#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin, s);
    stringstream ss(s);
    string k;
    vector<string> xau;
    while (ss >> k){
        xau.push_back(k);
    }
    for (auto x:xau[xau.size()-1]){
        x=tolower(x);
        cout << x;
    }
    for (int i=0;i<xau.size()-1;i++){
        char x=towlower(xau[i][0]);
        cout << x;
    }
    cout << "@ptit.edu.vn";
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
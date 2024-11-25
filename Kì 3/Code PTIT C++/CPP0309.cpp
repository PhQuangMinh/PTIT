#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin, s);
    cin.ignore();
    stringstream ss(s);
    string k;
    int cnt=0;
    while (ss >> k){
        cnt++;
    }
    cout << cnt;
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
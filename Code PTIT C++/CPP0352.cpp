#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string, int> mp;
void solve(){
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    stringstream tach(s);
    string k;
    vector<string> vt;
    while (tach >> k){
        vt.push_back(k);
    }
    string ans = vt[vt.size()-1];
    for (int i=0;i<vt.size()-1;i++)
        ans+= vt[i][0];
    mp[ans]++;
    cout << ans;
    if (mp[ans]>1) cout << mp[ans]; 
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
    int n;
    cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
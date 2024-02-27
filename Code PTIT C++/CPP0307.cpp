#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if (a<b) return 1;
    return 0;
}
void solve(){
    string s, t;
    getline(cin, s);
    getline(cin, t);
    vector<string> xaus, xaut;
    stringstream tach(s);
    string k;
    while (tach >> k) xaus.push_back(k);
    stringstream tach1(t);
    while (tach1 >> k) xaut.push_back(k);
    vector<string> ans;
    for (auto x:xaus){
        int ok=1;
        for (auto y:xaut)
            if (x==y) ok=0;
        if (ok) ans.push_back(x);
    }
    sort(ans.begin(), ans.end(), cmp);
    for (int i=0;i<ans.size();i++)
        if (ans[i]!=ans[i+1]) cout << ans[i] << ' ';
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
    // solve();
}
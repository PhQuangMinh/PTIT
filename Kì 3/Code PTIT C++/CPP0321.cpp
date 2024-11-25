#include<bits/stdc++.h>
using namespace std;
void tru(string s, string t){
    int i=s.size()-1, j = t.size()-1;
    int du=0;
    vector<int> ans;
    while (i>=0 || j>=0){
        int a=(i>=0)?s[i]-'0':0;
        int b=(j>=0)?t[j]-'0':0;
        int t = a-b-du;
        if (t<0){
            t+=10;
            du=1;
        }
        else du=0;
        i--;j--;
        ans.push_back(t);
    }
    for (int i=ans.size()-1;i>=0;i--) cout << ans[i];
}
void solve(){
    string s, t;
    cin >> s >> t;
    if (t.size()>s.size() || t.size()==s.size() && t>s) swap(s, t);
    tru(s, t);
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
    // solve();
}
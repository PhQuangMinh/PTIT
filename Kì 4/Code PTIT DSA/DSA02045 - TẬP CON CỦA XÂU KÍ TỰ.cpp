#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n;
string s;
vector<string> ans;
void Try(string t, int j){
    for (int i=j;i<n;i++){
        t+=s[i];
        ans.push_back(t);
        if (i+1<n) Try(t, i+1);
        t.pop_back();
    }
}
void solve(){
    ans.clear();
    cin >> n;
    cin >> s;
    sort(s.begin(), s.end());
    Try("", 0);
    sort(ans.begin(), ans.end());
    for (auto x:ans) cout << x << " ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
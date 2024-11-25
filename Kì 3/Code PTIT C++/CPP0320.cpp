#include<bits/stdc++.h>
using namespace std;
string ans(string s){
    if (s[0]=='0') return "INVALID";
    int a[10]={0};
    for (int i=0;i<s.size();i++){
        a[s[i]-'0']++;
        if (s[i]<'0' || s[i]>'9') return "INVALID";
    }
    for (int i=0;i<=9;i++) 
        if (a[i]==0) return "NO";
    return "YES";
}
void solve(){
    string s;
    cin >> s;
    cout << ans(s);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
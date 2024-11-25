#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string, int> mp;
char out(char c){
    string s[10] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
    for (int i=0;i<=7;i++){
        for (int j=0;j<s[i].size();j++)
            if (s[i][j]==c) return (i+2)+'0';
    }
    return 'c';
}
int dx(string s){
    int n = s.size();
    for (int i=0;i<n;i++)
        if (s[i]!=s[n-i-1]) return 0;
    return 1;
}
void solve(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    string ans="";
    for (auto x:s) ans+=out(x);
    if (dx(ans)) cout << "YES";
    else cout << "NO";
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
//    solve();
}
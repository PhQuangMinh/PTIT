#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
string bin(string s){
    for (int i = s.size()-1;i>=0;i--){
        if (s[i]=='1') s[i]='0';
        else{
            s[i]='1';
            return s;
        }
    }
    s='1'+s;
    return s;
}
void solve(){
    int n;
    cin >> n;
    string s="0";
    for (int i=1;i<=n;i++){
        s = bin(s);
        cout << s << ' ';
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
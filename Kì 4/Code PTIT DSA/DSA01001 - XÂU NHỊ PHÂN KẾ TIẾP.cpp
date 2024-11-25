#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    int n = s.size()-1;
    while (s[n]=='1' && n>=0){
        s[n]='0';
        n--;
    }
    if (n>=0){
        s[n]='1';
    }
    cout << s;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
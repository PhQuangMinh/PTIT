#include<bits/stdc++.h>
using namespace std;
int checktn(string s){
    int n=s.size();
    for (int i=0;i<n/2;i++)
        if (s[i]!=s[n-i-1]) return 0;
    for (int i=0;i<n;i++){
        int tmp=s[i]-'0';
        if (tmp%2==1) return 0;
    }
    return 1;
}
void solve(){
    string s;
    cin >> s;
    if (checktn(s)==1) cout << "YES";
    else cout << "NO";
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
//    solve();
}
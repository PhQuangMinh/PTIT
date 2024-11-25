#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int n=s.size();
    if (s[n-2]=='8' && s[n-1]=='6') cout << "1";
    else cout << "0";
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int sum=0;
    int n=s.size();
    int tmp=1;
    for (int i=n-1;i>=0;i--){
        sum+=tmp*(s[i]-'0');
        tmp*=2;
        tmp%=5;
        sum%=5;
    }
    if (sum%5==0) cout << "Yes";
    else cout << "No";
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
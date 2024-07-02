#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dx = 0;
    int dd = 0;
    for (int i=0;i<n;i++){
        if (s[i]=='X') dx++;
        else{
            if (s[i]=='D') dd++;
        }
    }
    int cnt1=0, cnt2 = 0;
    int ans = 0;
    for (int i=0;i<dx;i++){
        if (s[i]!='X'){
            ans++;
            if (s[i]=='D') cnt1++;
        }
    }
    for (int i=n-dd;i<n;i++){
        if (s[i]!='D'){
            ans++;
            if (s[i]=='X') cnt2++;
        }
    }
    cout << ans - min(cnt1, cnt2);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
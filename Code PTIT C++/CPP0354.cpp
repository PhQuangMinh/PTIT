#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    int cnt=1;
    cin >> s;
    int n=s.size();
    s+=' ';
    for (int i=0;i<n;i++)
        if (s[i]==s[i+1]) cnt++;
        else{
            cout << s[i] << cnt;
            cnt=1;
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}
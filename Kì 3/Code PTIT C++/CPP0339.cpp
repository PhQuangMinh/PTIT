#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    getline(cin, s);
    int a[1000]={0};
    int ans=s.size();
    int n=s.size();
    for (int i=0;i<n;i++){
        ans+=a[s[i]];
        a[s[i]]++;
    }
    cout << ans;
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
    cin.ignore();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}
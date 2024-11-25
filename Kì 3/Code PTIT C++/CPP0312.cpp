#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int k;
    cin >> k;
    if (s.size()<26){
        cout << 0;
        return;
    }
    int a[200]={0};
    for (auto x:s){
        a[x]++;
    }
    int cnt=0;
    for (int i=97;i<=122;i++)
        if (a[i]==0) cnt++;
    if (cnt<=k) cout << 1;
    else cout << 0;
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
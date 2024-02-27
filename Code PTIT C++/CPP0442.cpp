#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, x;
    cin >> n >> x;
    int ans=-1;
    for (int i=1;i<=n;i++){
        int a;
        cin >> a;
        if (x==a) ans=1;
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
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
#include<bits/stdc++.h>
using namespace std;
int a[10000000];
void solve(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    if (a[1]==a[2]) cout << -1;
    else
        cout << a[1] << " " << a[2];
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
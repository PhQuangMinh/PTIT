#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    long long a[n+5], b[n+5];
    for (int i=0;i<n;i++) cin >> a[i];
    for (int i=0;i<m;i++) cin >> b[i];
    cout << *max_element(a, a+n)**min_element(b, b+m);
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
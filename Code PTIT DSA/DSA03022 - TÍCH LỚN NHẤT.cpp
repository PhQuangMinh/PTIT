#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void solve(){
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    int ma = a[n-2]*a[n-1]*a[n];
    ma = max(ma, a[n-1]*a[n]);
    ma = max(ma, a[2]*a[1]);
    ma = max(ma, a[1] * a[2] * a[n]);
    cout << ma;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
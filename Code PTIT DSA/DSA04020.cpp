#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n >> k;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int tmp = lower_bound(a+1, a+n+1, k) - a;
    if (a[tmp]==k) cout << tmp;
    else cout << "NO";
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
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
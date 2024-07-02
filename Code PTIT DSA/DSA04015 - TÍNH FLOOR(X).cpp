#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void solve(){
    long long k;
    cin >> n >> k;
    long long a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    if (k<a[1]){
        cout << -1;
        return;
    }
    if (k>=a[n]){
        cout << n;
        return;
    }
    a[n+1] = 1e18+5;
    int tmp = upper_bound(a+1, a+n+2, k) - a;
    if (a[tmp]>k) cout << tmp-1;
    else cout << tmp;
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
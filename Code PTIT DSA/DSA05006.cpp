#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int f[n+5] = {};
    f[1] = a[1];
    for (int i=2;i<=n;i++){
        f[i] = a[i];
        for (int j=1;j<i;j++){
            if (a[i]>a[j]){
                f[i] = max(f[i], f[j]+a[i]);
            }
        }
    }
    cout << *max_element(f+1, f+n+1);
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    ll k;
    cin >> k;
    ll f[n+5]={};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        f[i] = f[i-1] + x;
    }
    int l = 1, r = 1;
    while (r<=n){
        if (l>r){
            r++;
            continue;
        }
        if (f[r] - f[l-1] == k){
            cout << "YES";
            return;
        }
        else
            if (f[r]-f[l-1]>k) l++;
            else r++;
    }
    cout << "NO";
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
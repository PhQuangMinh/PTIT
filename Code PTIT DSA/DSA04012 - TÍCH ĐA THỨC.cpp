#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int ans[n+m+5]={};
    int p[n+5], q[m+5];
    for (int i=0;i<n;i++) cin >> p[i];
    for (int i=0;i<m;i++) cin >> q[i];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++){
            ans[i+j] += p[i]*q[j];
        }
    for (int i=0;i<m+n-1;i++) cout << ans[i] << ' ';
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
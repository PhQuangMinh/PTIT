#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5], b[m+5], d[10] = {};
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int i=1;i<=m;i++){
        cin >> b[i];
        if (b[i]<5) d[b[i]]++;
    }
    sort(b+1, b+m+1);
    int ans = 0;
    for (int i=1;i<=n;i++){
        if (a[i]>0){
            if (a[i]==1){
                ans+=d[0];
                continue;
            }
            int tmp = upper_bound(b+1, b+m+1, a[i])-b;
            ans += n-tmp;
            ans+=d[0]+d[1];
            if (a[i]==2) ans -= (d[3]+d[4]);
            if (a[i]==3) ans += d[2];
        }
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n;
int a[1005];
bool check(int i){
    for (int j=1;j<=n;j++){
        if (a[j]/i==a[j]/(i+1)) return false;
    }
    return true;
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++) cin >> a[i];
    int x = *max_element(a+1, a+n+1);
    for (int i=x;i>0;i--){
        if (check(i)){
            int ans = 0;
            for (int j=1;j<=n;j++){
                ans += (a[j]/(i+1))+1;
            }
            cout << ans;
            return;
        }
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int cmp(int a, int b){
    return a>b;
}
void solve(){
    int n;
    cin >> n;
    ll a[n+5], b[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    for (int j=1;j<=n;j++) cin >> b[j];
    sort(a+1, a+n+1);
    sort(b+1, b+n+1, cmp);
    ll sum = 0;
    for (int i=1;i<=n;i++) sum+=a[i]*b[i];
    cout << sum;
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
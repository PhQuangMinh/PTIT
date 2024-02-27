#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int snt(int n){
    for (int i=2;i*i<=n;i++)
        if (n%i==0) return 0;
    return n>1;
}
void solve(){
    int n;
    cin >> n;
    if (n%2==1){
        if (snt(n-2)) cout << 2 << ' ' << n-2;
        else cout << -1;
        return;
    }
    for (int i=0;i<=n/2;i++)
        if (snt(i) && snt(n-i)){
            cout << i << " " << n-i;
            return;
        }
    cout << -1;
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
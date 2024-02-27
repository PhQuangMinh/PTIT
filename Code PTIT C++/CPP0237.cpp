#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int b[n+5] = {0};
    for (int i=1;i<=n;i++) b[i] = b[i-1] + a[i];
    for (int i=1;i<=n;i++)
        if (b[i-1] == b[n] - b[i]){
            cout << i;
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
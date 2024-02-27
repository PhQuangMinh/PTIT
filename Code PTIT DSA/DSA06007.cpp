#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5], b[n+5];
    for (int i=1;i<=n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b+1, b+n+1);
    for (int i=1;i<=n;i++)
        if (a[i]!=b[i]){
            cout << i << " ";
            break;
        }
    for (int i=n;i>=1;i--)
        if (a[i]!=b[i]){
            cout << i;
            return;
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
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
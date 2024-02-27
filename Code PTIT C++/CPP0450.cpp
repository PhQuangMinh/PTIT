#include<bits/stdc++.h>
using namespace std;
int b[1000005];
void solve(){
    int n;
    cin >> n;
    map<int, int> a;
    int ans=-1;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[x]++;
        if (ans==-1 && a[x]>1) ans=x;
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, x;
    cin >> n >> x;
    map<int, int> a;
    for (int i=1;i<=n;i++){
        int y;
        cin >> y;
        if (x==y) a[x]++;
    }
    if (a[x]==0) cout << -1;
    else
    cout << a[x];
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
 //   solve();
}
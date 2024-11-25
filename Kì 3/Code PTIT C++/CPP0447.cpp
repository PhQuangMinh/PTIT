#include<bits/stdc++.h>
using namespace std;
int a[10000];
int cmp(int x, int y){
    if (x>=y) return 1;
    return 0;
}
void solve(){
    int n, k;
    cin >> n >> k;
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1, cmp);
    for (int i=1;i<=k;i++) cout << a[i] << " ";
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
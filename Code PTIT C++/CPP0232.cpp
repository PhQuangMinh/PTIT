#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5][m+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    in
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
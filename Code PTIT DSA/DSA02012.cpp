#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5][m+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    int b[n+5][m+5];
    for (int i=0;i<=n;i++)
        for (int j=0;j<=m;j++)
            b[i][j] =0;
    b[0][1] = 1;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            b[i][j] = b[i-1][j] + b[i][j-1];
    cout << b[n][m];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
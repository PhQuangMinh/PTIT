#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5][n+5];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (i==j) a[i][j] = 0;
            else a[i][j] = mod;
        }
    }
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = 1; 
    }

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            for (int k=1;k<=n;k++){
                a[j][k] = min(a[j][k], a[j][i]+a[i][k]);
            }
        }
    }
    double dis = 0;
    int cnt = 0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (a[i][j]>0 && a[i][j]<mod){
                dis+=a[i][j];
                cnt++;
            }
        }
    }
    cout << fixed << setprecision(2) << dis/cnt;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
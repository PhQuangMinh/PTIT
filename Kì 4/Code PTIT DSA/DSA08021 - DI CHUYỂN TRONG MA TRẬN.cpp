#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5][m+5], d[n+5][m+5];
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++){
            cin >> a[i][j];
            d[i][j] = 0;
        }
    queue<pair<int, int>> qu;
    qu.push({1, 1});
    while (!qu.empty())
    {
        pair<int, int> u = qu.front();
        qu.pop();
        if (u.first == n && u.second==m){
            cout << d[n][m];
            return;
        }
        // cout << u.first << ' ' << u.second << '\n'; 
        int tmp = u.first+a[u.first][u.second];
        // cout << tmp << ' ';
        if (tmp<=n && d[tmp][u.second]==0){
            qu.push({tmp, u.second});
            d[tmp][u.second] = d[u.first][u.second]+1;
        }
        tmp = u.second+a[u.first][u.second];
        // cout << tmp << 'a\n';
        if (tmp<=m && d[u.first][tmp]==0){
            qu.push({u.first, tmp});
            d[u.first][tmp] = d[u.first][u.second]+1;
        }
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
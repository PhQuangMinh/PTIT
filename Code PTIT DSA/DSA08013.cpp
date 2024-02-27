#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n;
int dx[10] = {-1, 0, 1, 0};
int dy[10] = {0, 1, 0, -1};
int u, v, x, y;
int vs[105][105], f[105][105];
void solve(){
    cin >> n;
    char a[n+5][n+5];
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
            vs[i][j] = 0;
            f[i][j] = 0;
        }
    }
    cin >> u >> v >> x >> y;
    queue<pair<int, int>> qu;
    u++;v++;x++;y++;
    qu.push({u, v});
    while (!qu.empty()){
        pair<int, int> tmp = qu.front();
        qu.pop();
        for (int i=0;i<4;i++){
            int x1 = tmp.first + dx[i];
            int y1 = tmp.second + dy[i];
            if (!vs[x1][y1] && a[x1][y1]=='.' && x1>=1 && y1>=1 && x1<=n && y1<=n){
                f[x1][y1] = f[tmp.first][tmp.second] + 1;
                vs[x1][y1] = 1;
                qu.push({x1, y1});
            }
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cout << f[i][j] << ' ';
        cout << '\n';
    }
    cout << f[x][y];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
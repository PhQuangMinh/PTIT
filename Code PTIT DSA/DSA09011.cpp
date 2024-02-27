#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int a[501][501];
int dx[10] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[10] = {-1, 0, 1, 1, 1, 0, -1, -1};
int n, m;
void bfs(int i, int j){
    queue<pair<int, int>> qu;
    qu.push({i, j});
    a[i][j] = 0;
    while (!qu.empty()){
        pair<int, int> u = qu.front();
        qu.pop();
        for (int i=0;i<8;i++){
            int x = u.first + dx[i];
            int y = u.second + dy[i];
            if (a[x][y] && x>=1 && y>=1 && x<=n && y<=m){
                qu.push({x, y});
                a[x][y] = 0;
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    memset(a, 0, sizeof(a));
    for (int i=1;i<=n;i++)
        for (int j=1;j<=m;j++)
            cin >> a[i][j];
    int cnt = 0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (a[i][j]){
                bfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
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
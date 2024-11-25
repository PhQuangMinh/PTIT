#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int r, c;
    cin >> r >> c;
    int count = 0;
    int a[r+5][c+5], f[r+5][c+5] = {0};
    queue<pair<int, int>> qu;
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            cin >> a[i][j];
            if (a[i][j] == 1){
                count++;
            }
            else{
                if (a[i][j]==2){
                    qu.push({i, j});
                }
            }
        }
    }

    if (count == 0){
        cout << 0;
        return;
    }
    
    int dx[5] = {0, -1, 0, 1};
    int dy[5] = {-1, 0, 1, 0};

    while (!qu.empty()){
        pair<int, int> tmp = qu.front();
        qu.pop();

        for (int i=0;i<4;i++){
            int x = tmp.first + dx[i];
            int y = tmp.second + dy[i];
            if (x>=1 && x<=r && y>=1 && y<=c && a[x][y]==1){
                a[x][y] = 2;
                count--;

                f[x][y] = f[tmp.first][tmp.second] + 1;
                if (count==0){
                    cout << f[x][y];
                    return;
                }
                qu.push({x, y});
            }
        }
    }
    cout << -1;
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
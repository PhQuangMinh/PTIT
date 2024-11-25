#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n;
int u, v, x, y;
void solve(){
    cin >> n;
    char a[n+5][n+5];
    int vs[105][105] = {0}, f[105][105] = {0};
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }

    cin >> u >> v >> x >> y;
    queue<pair<int, int>> qu;
    qu.push({u, v});

    while (!qu.empty()){
        pair<int, int> tmp = qu.front();
        qu.pop();
        u = tmp.first;v = tmp.second;
        if (u == x && v == y){
            cout << f[x][y];
            return;
        }

        for (int i=u+1;i<n;i++){
            if (!f[i][v]  && a[i][v]=='.'){
                f[i][v] = f[u][v] + 1;
                qu.push({i, v});
            }
            else break;
        }

        for (int i=v+1;i<n;i++){
            if (!f[u][i]  && a[u][i]=='.'){
                f[u][i] = f[u][v] + 1;
                qu.push({u, i});
            }
            else break;
        }

        for (int i=u-1;i>=0;i--){
            if (!f[i][v]  && a[i][v]=='.'){
                f[i][v] = f[u][v] + 1;
                qu.push({i, v});
            }
            else break;
        }

        for (int i=v-1;i>=0;i--){
            if (!f[u][i]  && a[u][i]=='.'){
                f[u][i] = f[u][v] + 1;
                qu.push({u, i});
            }
            else break;
        }
    }
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
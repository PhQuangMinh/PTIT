#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, m, v;
    cin >> n >> m >> v;
    int a[100][100] = {0};
    for (int i=1;i<=m;i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    vector<pair<int, int>> edge;
    for (int i=1;i<=n;i++){
        int cnt = 0;
        for (int j=1;j<=n;j++){
            if (a[i][j]) cnt++;
        }
        edge.push_back({i, cnt});
    }
    sort(edge.begin(), edge.end(), [](pair<int, int> a, pair<int, int> b){
        return a.second>b.second;   
    });
    bool vs[100] = {0};
    int ans = 0;
    for (auto x:edge){
        if (!vs[x.first]){
            ans++;
            vs[x.first] = true;
            for (int j=1;j<=n;j++){
                if (!a[x.first][j]){
                    vs[j] = 1;
                }
            }
        }
    }
    if (ans<=v) cout << "YES";
    else cout << "NO";
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
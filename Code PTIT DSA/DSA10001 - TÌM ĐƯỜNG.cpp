#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int m, n;
char a[505][505];
bool vs[505][505];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char d[4] = {'U', 'D', 'L', 'R'};
bool check;
void Try(int x, int y, char di, int cnt){
    vs[x][y] = true;
    if (check) return;
    if (a[x][y] == 'T' && cnt <=2){
        check = true;
        return;
    }

    if (cnt>2 || a[x][y]=='T'){
        vs[x][y] = 0;
        return;
    }

    for (int i=0;i<4;i++)
    {
        int u = x + dx[i];
        int v = y + dy[i];
        if (u > 0 && u <= n && v > 0 && v <= m && a[u][v] != '*' && !vs[u][v])
        {
            if (d[i] != di)
                Try(u, v, d[i], cnt+1);
            else
                Try(u, v, d[i], cnt);
        }
    }

    vs[x][y] = 0;
}
void solve(){
    cin >> n >> m;
    check = false;
    int u, v;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> a[i][j];
            if (a[i][j] == 'S'){
                u = i;v = j;
            }
        }
    }

    memset(vs, 0, sizeof(vs));

    Try(u, v, 'M', -1);
    
    if (check) cout << "YES";
    else cout << "NO";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, m;
int a[505][505];
int dx[10] = {-1, 0, 1, 0};
int dy[10] = {0, 1, 0, -1};
struct dt{
    int x, y, w;
};
struct cmp
{
	bool operator()(struct dt a, struct dt b)
	{
		return a.w > b.w;
	}
};
void difkstra(){
    int vs[505][505] = {};
    priority_queue<dt, vector<dt>, cmp> pq;
    pq.push({1, 1, a[1][1]});
    while (!pq.empty()){
        dt tmp = pq.top();
        pq.pop();
        if (tmp.x==n && tmp.y==m){
            cout << tmp.w;
            return;
        }
        for (int i=0;i<4;i++){
            int x = tmp.x + dx[i];
            int y = tmp.y + dy[i];
            int w = tmp.w + a[x][y];
            if (x>=1 && x<=n && y>=1 && y<=m && !vs[x][y]){
                vs[x][y] = 1;
                pq.push({x, y, w});
            }
        }
    }
}
void solve(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    difkstra();
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
#include <bits/stdc++.h>
using namespace std;
int n, m, v;
vector<int> vt[1001];
bool visited[1001];
string ans;
void dfs(int u)
{
    visited[u] = true;
    if (u == v)
        ans = "YES";
    if (ans == "YES")
        return;
    for (auto v : vt[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}
void solve()
{
    int u;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        vt[x].push_back(y);
        vt[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        sort(vt[i].begin(), vt[i].end());
    }
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        ans = "NO";
        cin >> u >> v;
        memset(visited, false, sizeof(visited));
        dfs(u);
        cout << ans;
        if (i!=q) cout << "\n";
    }
    for (int i = 1; i <= n; i++)
        vt[i].clear();
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
// #ifndef ONLINE_JUGDE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
        if (i != t)
            cout << "\n";
    }
}
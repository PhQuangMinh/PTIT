#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int n, p, s;
vector<vector<int>> ans;
vector<int> tmp;
int snt(int x)
{
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return x > 1;
}
void Try(int i, int nt[], int sum)
{
    if (nt[i]>s || sum>s) return;
    if (sum == s && tmp.size()==n)
    {
        ans.push_back(tmp);
        return;
    }
    tmp.push_back(nt[i]);
    sum += nt[i];
    Try(i + 1, nt, sum);
    sum -= nt[i];
    tmp.pop_back();
    Try(i+1, nt, sum);
}
void solve()
{
    cin >> n >> p >> s;
    int nt[100], d = 0;
    for (int i = p + 1; i <= 210; i++)
        if (snt(i))
            nt[++d] = i;
    ans.clear();
    Try(1, nt, 0);
    cout << ans.size() << '\n';
    for (auto x : ans)
    {
        for (auto t : x)
            cout << t << ' ';
        cout << '\n';
    }
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
    }
}
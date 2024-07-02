#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
void solve()
{
    int n;
    cin >> n;
    int a[n + 5];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    pair<int, int> ans;
    ans.second = mod;
    for (int i = 1; i <= n; i++)
    {
        if (mp[a[i]] == 0)
        {
            mp[a[i]] = i;
        }
        else
        {
            if (mp[a[i]] < ans.second)
            {
                ans.first = a[i];
                ans.second = mp[a[i]];
            }
        }
    }
    if (ans.second != mod)
        cout << ans.first;
    else
        cout << "NO";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
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
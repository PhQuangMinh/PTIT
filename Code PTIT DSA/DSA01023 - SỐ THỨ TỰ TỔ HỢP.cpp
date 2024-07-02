#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    int n, k;
    cin >> n >> k;
    int b[k + 5];
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    int ans = 0;
    int a[k + 5];
    for (int i = 1; i <= k; i++)
        a[i] = i;
    while (1)
    {
        int ok=1;
        for (int i=1;i<=k;i++)
            if (a[i]!=b[i]) ok=0;
        ans++;
        if (ok){
            cout << ans;
            return;
        }
        int i = k;
        while (i > 0 && a[i] == n - k + i)
            i--;
        if (i != 0)
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
                a[j] = a[j - 1] + 1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        solve();
        if (i != n)
            cout << "\n";
    }
}
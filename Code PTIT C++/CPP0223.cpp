#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n + 5][m + 5];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    int d = 0;
    int h1 = 1, h2 = n, c1 = 1, c2 = m;

    while (1)
    {
        for (int i = c1; i <= c2; i++)
        {
            d++;
            cout << a[h1][i] << " ";
        }
        h1++;
        if (d == m * n)
            break;
        for (int i = h1; i <= h2; i++)
        {
            cout << a[i][c2] << " ";
            d++;
        }
        c2--;
        if (d == m * n)
            break;
        for (int i = c2; i >= c1; i--)
        {
            cout << a[h2][i] << " ";
            d++;
        }
        h2--;
        if (d == m * n)
            break;
        for (int i = h2; i >= h1; i--)
        {
            cout << a[i][c1] << " ";
            d++;
        }
        c1++;
        if (d == m * n)
            break;
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
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        solve();
        if (i != n)
            cout << "\n";
    }

    return 0;
}

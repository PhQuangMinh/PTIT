#include <bits/stdc++.h>
using namespace std;
string gt(char x)
{
    switch (x)
    {
    case '1':
        return "1";
        break;
    case '2':
        return "2";
        break;
    case '3':
        return "3";
        break;
    case '4':
        return "322";
        break;
    case '5':
        return "5";
        break;
    case '6':
        return "53";
        break;
    case '7':
        return "7";
        break;
    case '8':
        return "7222";
        break;
    case '9':
        return "7332";
        break;
    default:
        break;
    }
    return "1";
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    string ans="";
    for (int i=0;i<n;i++){
        ans += gt(s[i]);
    }
    sort(ans.begin(), ans.end());
    while (ans[0]<='1') ans.erase(ans.begin());
    reverse(ans.begin(), ans.end());
    cout << ans;
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
    //    solve();
}
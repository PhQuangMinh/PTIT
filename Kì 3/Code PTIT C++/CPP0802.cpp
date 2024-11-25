#include <bits/stdc++.h>
using namespace std;
#define ll long long
int solve(string s)
{
    if (s[0] != '-' && s[0] < '0' || s[0] != '-' && s[0] > '9')
        return 0;
    for (int i = 1; i < s.size(); i++)
        if (s[i] < '0' || s[i] > '9')
            return 0;
    long long tong = 0;
    int ok = 0;
    if (s[0] == '-')
        ok++;
    for (int i = ok; i < s.size(); i++)
    {
        tong = tong * 10 + (s[i] - '0');
        if (tong > INT_MAX || -1*tong<INT_MIN) return 0;
    }
    if (ok) tong*=-1;
    return tong;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DATA.in", "r", stdin);
    string s;
    long long ans = 0;
    while (getline(cin, s))
    {
        stringstream tach(s);
        string k;
        while (tach >> k)
        {
            ans += solve(k);
        }
    }
    cout << ans;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
char c;
vector<string> ans;
string s;
void Try(char i) {
    for (char j = i; j <= c; ++j) {
        s.push_back(j);
        if (s.length() == k) ans.push_back(s);
        else Try(j);
        s.pop_back();
    }
}

void solve()
{
    cin >> c >> k;
    Try('A');
    for (auto x : ans)
        cout << x << '\n';
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
    int n = 1;
    // cin >> n;
    for (int i = 1; i <= n; i++)
    {
        solve();
        if (i != n)
            cout << "\n";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    stack<int> st;
    for (int i = 0; i <= n; i++)
    {
        st.push(i + 1);
        if (s[i] == 'I' || i == n)
        {
            while (!st.empty())
            {
                cout << st.top();
                st.pop();
            }
        }
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
        if (i != t)
            cout << "\n";
    }
}
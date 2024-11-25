#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
void solve()
{
    string s;
    cin >> s;
    stack<int> so;
    string tmp = "";
    int n = s.size();
    stack<string> st;
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            so.push(num);
        }
        else if (s[i] == ']') {
            string tmp = "";
            while (st.top() != "[") {
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();

            string res = "";
            int dem = so.top(); so.pop();
            while (dem--) res += tmp;
            st.push(res);
        }
        else {
            st.push(string(1, s[i]));
            if (s[i] == '[' && (i == 0 || s[i - 1] < '0' || s[i - 1] > '9'))
                so.push(1);
        }
    }
    while (!st.empty()){
        ans = st.top()+ans;
        st.pop();
    }
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
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
        if (i != t)
            cout << "\n";
    }
}
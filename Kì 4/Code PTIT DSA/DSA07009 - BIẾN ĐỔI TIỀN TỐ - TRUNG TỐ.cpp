#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int check(char c){
    if (c=='+' || c == '-' || c == '*' || c == '/') return true;
    return false;
}
void solve()
{
    string s;
    getline(cin, s);
    stack<string> st;
    int n = s.size();
    for (int i=n;i>=0;i--){
        string t="";
        t+=s[i];
        if (check(s[i])){
            string x = st.top();st.pop();
            string y = st.top();st.pop();
            string tmp = '(' + x + s[i] + y + ')';
            st.push(tmp);
        }
        else st.push(t);
    }
    cout << st.top();
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
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        solve();
        if (i != t)
            cout << "\n";
    }
}
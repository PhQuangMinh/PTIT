#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
int cal(int x, int y, char c){
    if (c=='+') return x+y;
    if (c=='-') return x-y;
    if (c=='*') return x*y;
    return x/y;
}
int check(char c){
    if (c=='+' || c == '-' || c == '*' || c == '/') return true;
    return false;
}
void solve()
{
    string s;
    getline(cin, s);
    stack<int> st;
    int n = s.size();
    for (int i=0;i<n;i++){
        int t = s[i]-'0';
        if (check(s[i])){
            int y = st.top();st.pop();
            int x = st.top();st.pop();
            int tmp = cal(x, y, s[i]);
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
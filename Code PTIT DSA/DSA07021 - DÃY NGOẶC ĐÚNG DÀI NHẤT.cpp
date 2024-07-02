#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
void solve()
{
    string s;
    getline(cin, s);
    stack<int> st;
    int n = s.size();
    for (int i=0;i<n;i++){
        if (s[i]==')' && !st.empty() && s[st.top()]=='(') st.pop();
        else{
            st.push(i);
        }
    }
    if (st.empty()){
        cout << n;
        return;
    }
    vector<int> vt;
    while (!st.empty()){
        vt.push_back(st.top());
        st.pop();
    }
    sort(vt.begin(), vt.end());
    int ans = 0;
    if (vt.front()!=0) vt.insert(vt.begin(), -1);
    if (vt.back()!=n-1) vt.insert(vt.end(), n);
    for (int i=1;i<vt.size();i++){
        ans = max(ans, vt[i]-vt[i-1]-1);
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
    cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        solve();
        if (i != t)
            cout << "\n";
    }
}
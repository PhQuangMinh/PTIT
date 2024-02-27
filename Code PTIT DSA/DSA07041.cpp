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
    vector<int> vt;
    int beg = 0;
    for (int i=0;i<n;i++){
        if (s[i]=='(') st.push(i);
        else{
            if (s[i]==')'){
                if (!st.empty()){
                    vt.push_back(2);
                    st.pop();
                }
                else vt.push_back(-1);
            }
        }
    }
    vt.push_back(-1);
    int ans = 0;
    for (auto x:vt){
        if (x>0) ans+=x;
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
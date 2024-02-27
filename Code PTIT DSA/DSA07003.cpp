#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
bool dau(char c){
    if (c=='+' || c=='-' || c=='*' || c=='/') return true;
    return false;
}
void solve()
{
    string s;
    getline(cin, s);
    stack<char> st, ngoac;
    int n = s.size();
    for (int i=0;i<n;i++){
        if (s[i]!=')') st.push(s[i]);
        if (s[i]=='(') ngoac.push(i);
        else{
            if (s[i]==')'){
                if (ngoac.empty()){
                    cout << "Yes";
                    return;
                }
                int check = true;
                while (!st.empty()){
                    char c = st.top();st.pop();
                    if (dau(c)){
                        check = false;
                    }
                    if (c=='(') break;
                }
                if (check){
                    cout << "Yes";
                    return;
                }
            }
        }
    }
    cout << "No";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
string convert(string s){
    stack<char> st;
    int n = s.size();
    for (int i=0;i<n;i++){
        if (s[i]!=')') st.push(s[i]);
        else{
            string tmp = "";
            while (st.top()!='('){
                tmp = st.top() + tmp;
                st.pop();
            }
            st.pop();
            if (!st.empty() && st.top()=='-'){
                for (auto x:tmp){
                    if (x=='+') x='-';
                    else
                        if (x=='-') x='+';
                    st.push(x);
                }
            }
            else{
                for (auto x:tmp){
                    st.push(x);
                }
            }
        }
    }
    string ans = "";
    while (!st.empty()){
        ans = st.top() + ans;
        st.pop();
    }
    return ans;
}
void solve(){
    string s, t;
    cin >> s >> t;
    if (convert(s)==convert(t)) cout << "YES";
    else cout << "NO";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
bool dau(char c){
    if (c=='+' || c=='-' || c=='/' || c=='*') return true;
    return false;
}
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    stack<string> st;
    for (int i=0;i<n;i++){
        if (dau(s[i])){
            string tmp1 = st.top();
            st.pop();
            string tmp2 = st.top();
            st.pop();
            string tmp = s[i] + tmp2 + tmp1;
            st.push(tmp);
        }
        else{
            st.push(string(1, s[i]));
        }
    }
    string ans;
    while (!st.empty()){
        ans += st.top();
        st.pop();
    }
    cout << ans;
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
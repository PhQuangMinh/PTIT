#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int dau(char c){
    if (c=='^') return 3;
    if (c=='/' || c=='*') return 2;
    if (c=='+' || c=='-') return 1;
    return -1;
}
bool checkkitu(char c){
    c = tolower(c);
    if (c>='a' && c<='z' || c>='0' && c<='9') return true;
    return false;
}
bool check(char c){
    if (c=='^') return true;
    return false;
}
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    string ans;
    for (int i = 0;i<n;i++){
        char c = s[i];
        if (checkkitu(c)) ans += s[i];
        else
            if (c=='(') st.push(c);
            else{
                if (c==')'){
                    while (st.top()!='('){
                        ans += st.top();
                        st.pop();
                    }
                    st.pop();
                }
                else{
                    while (!st.empty() && dau(c)<dau(st.top()) || !st.empty() && dau(c)==dau(st.top()) && !check(c)){
                        ans += st.top();
                        st.pop();
                    }
                    st.push(c);
                }
            }
    }
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
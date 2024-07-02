#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int check(char c){
    if (c=='(' || c=='[' || c=='{') return true;
    return false;
}
void solve(){
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    for (int i=0;i<n;i++){
        if (check(s[i])) st.push(s[i]);
        else{
            if (st.empty()){
                cout << "NO";
                return;
            }
            char tmp = st.top();
            if (s[i]!=tmp+1 && s[i]!=tmp+2){
                cout << "NO";
                return;
            }
            st.pop();
        }
    }
    if (!st.empty()){
        cout << "NO";
    }
    else cout << "YES";
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
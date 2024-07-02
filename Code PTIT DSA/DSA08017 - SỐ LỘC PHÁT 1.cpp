#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
bool check(string s, int n){
    int tmp = 0;
    for (int i=0;i<s.size();i++){
        tmp = tmp*10 + (s[i]-'0');
        tmp%=n;
    }
    if (tmp) return false;
    return true;
}
void solve(){
    int n;
    cin >> n;
    queue<string> qu;
    string s="";
    qu.push(s);
    stack<string> st;
    while (1)
    {
        s = qu.front();
        qu.pop();
        if (s.size()>n){
            break;
        }
        if (!s.empty()) st.push(s);
        qu.push(s+"6");
        qu.push(s+"8");
    }  
    while (!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    queue<string> qu;
    string s="";
    qu.push(s);
    stack<string> ans;
    while (1)
    {
        s = qu.front();
        qu.pop();
        if (s.size()>n){
            break;
        }
        if (!s.empty()) ans.push(s);
        qu.push(s+"6");
        qu.push(s+"8");
    }  
    cout << ans.size() << '\n';
    while (!ans.empty()){
        cout << ans.top() << ' ';
        ans.pop();
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
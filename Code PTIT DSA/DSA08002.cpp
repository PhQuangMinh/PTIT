#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    queue<int> qu;
    for (int i=1;i<=n;i++){
        string s;
        cin >> s;
        if (s[1]=='U'){
            int x;
            cin >> x;
            qu.push(x);
        }
        else
            if (s[1]=='R'){
                if (qu.empty()) cout << "NONE\n";
                else cout << qu.front() << '\n';
            }
            else{
                if (!qu.empty()) qu.pop();
            }
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
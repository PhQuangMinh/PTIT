#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    cin.ignore();
    stack<string> ans;
    for (int i=1;i<=n;i++){
        string s;
        getline(cin, s);
        stringstream tach(s);
        vector<string> vt;
        string k;
        while (tach>> k){
            vt.push_back(k);
        }
        if (vt[0]=="PUSH") ans.push(vt[1]);
        else
            if (vt[0]=="PRINT"){
                if (ans.empty()) cout << "NONE";
                else cout << ans.top();
                cout << '\n';
            }
            else 
                if (!ans.empty()) ans.pop();
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
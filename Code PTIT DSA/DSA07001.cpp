#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    string s;
    vector<string> ans;
    while (getline(cin, s)){
        stringstream tach(s);
        vector<string> vt;
        string k;
        while (tach>> k){
            vt.push_back(k);
        }
        if (vt[0]=="push") ans.push_back(vt[1]);
        else
            if (vt[0]=="show"){
                if (ans.empty()) cout << "empty";
                else{
                    for (auto x:ans) cout << x << ' ';
                    cout << '\n';
                }
            }
            else ans.pop_back();
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
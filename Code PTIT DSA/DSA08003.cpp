#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    deque<int> de;
    for (int i=1;i<=n;i++){
        string s;
        cin >> s;
        if (s=="PUSHFRONT"){
            int x;
            cin >> x;
            de.push_front(x);
        }
        if (s=="PRINTFRONT"){
            if (de.empty()) cout << "NONE\n";
            else cout << de.front() << '\n';
        }
        if (s=="POPFRONT" && !de.empty()) de.pop_front();
        if (s=="PUSHBACK"){
            int x;
            cin >> x;
            de.push_back(x);
        }
        if (s=="PRINTBACK"){
            if (de.empty()) cout << "NONE\n";
            else cout << de.back() << '\n';
        }
        if (s=="POPBACK" && !de.empty()) de.pop_back();
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
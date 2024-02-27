#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    string s;
    getline(cin, s);
    stack<string> st;
    stringstream tach(s);
    string k;
    while (tach >> k){
        st.push(k);
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
    cin.ignore();
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
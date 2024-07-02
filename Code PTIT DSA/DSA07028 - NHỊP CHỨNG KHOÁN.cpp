#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int lmax[n+5] = {};
    stack<int> st;
    st.push(1);
    lmax[n] = 0;
    for (int i=2;i<=n;i++){
        while (!st.empty() && a[i]>=a[st.top()]) st.pop();
        if (st.empty()) lmax[i] = 0;
        else lmax[i] = st.top();
        st.push(i);
    }
    for (int i=1;i<=n;i++){
        cout << i-lmax[i] << ' ';
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
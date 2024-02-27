#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int rmax[n+5] = {}, lmax[n+5] = {};
    rmax[n] = n+1;
    stack<int> st;
    st.push(n);
    for (int i= n-1;i>=1;i--){
        while (!st.empty() && a[i]<=a[st.top()]) st.pop();
        if (st.empty()) rmax[i] = n+1;
        else rmax[i] = st.top();
        st.push(i);
    }
    while (!st.empty()) st.pop();
    st.push(1);
    lmax[n] = 0;
    for (int i=2;i<=n;i++){
        while (!st.empty() && a[i]<=a[st.top()]) st.pop();
        if (st.empty()) lmax[i] = 0;
        else lmax[i] = st.top();
        st.push(i);
    }
    int ans = 0;
    for (int i=1;i<=n;i++){
        int tmp = rmax[i]-lmax[i]-1;
        if (tmp>=a[i]) ans = max(ans, a[i]);
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    stack<int> st;
    st.push(n);
    int r[n+5]={0};
    r[n]=-1;
    for (int i=n-1;i>=1;i--){
        while (!st.empty() && a[st.top()]<=a[i]) st.pop();
        if (st.empty()) r[i] = -1;
        else r[i] = a[st.top()];
        st.push(i);
    }
    for (int i=1;i<=n;i++) cout << r[i] << ' ';
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int rmax[n+5] = {}, rmin[n+5] = {};
    rmax[n] = -1;
    stack<int> st;
    st.push(n);
    for (int i= n-1;i>=1;i--){
        while (!st.empty() && a[i]>=a[st.top()]) st.pop();
        if (st.empty()) rmax[i] = -1;
        else rmax[i] = st.top();
        st.push(i);
    }
    while (!st.empty()) st.pop();
    st.push(n);
    rmin[n] = -1;
    for (int i= n-1;i>=1;i--){
        while (!st.empty() && a[i]<=a[st.top()]) st.pop();
        if (st.empty()) rmin[i] = -1;
        else rmin[i] = st.top();
        st.push(i);
    }
    for (int i=1;i<=n;i++){
        if (rmax[i]==-1) cout << -1;
        else{
            if (rmin[rmax[i]]==-1) cout << -1;
            else cout << a[rmin[rmax[i]]];
        }
        cout << ' ';
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
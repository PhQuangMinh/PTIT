#include<bits/stdc++.h>
using namespace std;
int a[1000];
int n, m;
int process(){
    int l[m+5], r[m+5];
    stack<int> st;
    for (int i=1;i<=m;i++){
        while (st.size() && a[i]<=a[st.top()]) st.pop();
        if (st.size()) l[i]=st.top()+1;
        else l[i]=1;
        st.push(i);
    }
    st=stack<int> {};
    for (int i=m;i>=1;i--){
        while (st.size() && a[i]<=a[st.top()]) st.pop();
        if (st.size()) r[i]=st.top()-1;
        else r[i]=m;
        st.push(i);
    }
    int ans=0;
    for (int i=1;i<=m;i++)
        ans=max(ans, a[i]*(r[i]-l[i]+1));
    return ans;
}
void solve(){
    cin >> n >> m;
    int ans=0;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            int x;
            cin >> x;
            if (x==0) a[j]=0;
            else a[j]++;
        }
        ans=max(ans, process());
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
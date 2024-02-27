#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int beg=1e9, en=-1;
    map<int, int> a;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[x]=1;
        beg=min(x, beg);
        en=max(x, en);
    }
    int ans=0;
    for (int i=beg;i<=en;i++)
        if (a[i]==1) ans++;
    cout << en-beg+1-ans;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}
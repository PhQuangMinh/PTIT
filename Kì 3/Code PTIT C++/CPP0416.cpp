#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[1005]={0};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    int ans=0;
    for (int i=0;i<=k/2;i++)
        if (k%2==0 && i==k/2) ans+=a[i]*(a[i]-1)/2;
        else ans+=a[i]*a[k-i];
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
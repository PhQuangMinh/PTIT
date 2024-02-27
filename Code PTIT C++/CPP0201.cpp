#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    int ans=1e9+1;
    sort(a+1, a+n+1);
    for (int i=2;i<=n;i++)
        ans=min(ans, a[i]-a[i-1]);
    cout << ans;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
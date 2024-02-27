#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++)
        cin >> a[i];
    int ans=-1;
    for (int i=1;i<=n;i++)
        for (int j=i+1;j<=n;j++)
            if (a[j]>a[i]) ans=max(ans, a[j]-a[i]);
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
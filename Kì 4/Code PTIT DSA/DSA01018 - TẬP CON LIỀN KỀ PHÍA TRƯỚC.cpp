#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[k+5];
    for (int i=1;i<=k;i++) cin >> a[i];
    int i=k-1;
    a[0]=-1;
    while (i>=1 && a[i]==a[i+1]-1) i--;
    if (i==0){
        if (a[1]==1){
            for (int j=n-k+1;j<=n;j++) cout << j << " ";
            return;
        }
        cout << a[1]-1 << ' ';
        for (int j=n-k+2;j<=n;j++) cout << j << " ";
        return;
    }
    i++;
    for (int j=1;j<i;j++) cout << a[j] << " ";
    cout << a[i]-1 << " ";
    for (int j=n-k+i+1;j<=n;j++) cout << j << " ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
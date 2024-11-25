#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void solve(){
    int m, n, a, b;
    cin >> m >> n >> a >> b;
    int ans=0;
    for (int i=m;i<=n;i++)
        if (i%a==0 || i%b==0) ans++;
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
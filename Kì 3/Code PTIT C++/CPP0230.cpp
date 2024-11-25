#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int ans=0;
    for (int i=1;i<=n;i++){
        int d=0;
        for (int j=1;j<=3;j++){
            int x;
            cin >> x;
            if (x) d++;
        }
        if (d>=2) ans++;
    }
    cout << ans;
}
int main(){
    int n=1;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
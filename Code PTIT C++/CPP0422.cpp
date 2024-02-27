#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int cnt=0;
    for (int i=1;i<=n;i++){
        long long x;
        cin >> x;
        if (x) cout << x << " ";
        else cnt++;
    }
    for (int i=1;i<=cnt;i++) cout << "0 ";
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
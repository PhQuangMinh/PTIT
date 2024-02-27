#include<bits/stdc++.h>
using namespace std;
int a[10000000];
void solve(){
    int n;
    cin >> n;
    memset(a, -1, sizeof(a));
    for (int i=1;i<=n;i++){
        long long x;
        cin >> x;
        if (x<=n) a[x]=x;
    }
    for (int i=0;i<n;i++) cout << a[i] << " ";
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
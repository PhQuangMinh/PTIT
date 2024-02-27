#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void solve(){
    int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    cin >> n;
    int ans = 0;
    for (int i=9;i>=0;i--){
        ans+=n/a[i];
        n%=a[i];
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
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
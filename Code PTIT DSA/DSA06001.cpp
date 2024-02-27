#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    int l = 1, r = n;
    while (l<=r){
        cout << a[r] << ' ';
        if (l!=r) cout << a[l] << ' ';
        l++;
        r--;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
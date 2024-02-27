#include<bits/stdc++.h>
using namespace std;
#define ll long long
int ans, n;
int a[30], b[30], c[30];
void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!a[j] && !b[i + j - 1] && !c[i - j + n]) {
            a[j] = b[i + j - 1] = c[i - j + n] = 1;
            if (i == n) ans++;
            else Try(i + 1);
            a[j] = b[i + j - 1] = c[i - j + n] = 0;
        }
    }
}
void solve(){
    ans = 0;
    cin >> n;
    for (int i=1;i<=30;i++){
        a[i] = 0;
        b[i]=0;
        c[i]=0;
    }
    Try(1);
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
        cout << "\n";
        // if (i!=n) cout << "\n";
    }
}
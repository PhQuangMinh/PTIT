#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int tmp = pow(2, n) - 1;
    for (int i=0;i<=tmp;i++){
        string ans = "";
        int k = i;
        for (int i=1;i<=n;i++){
            char c = (k%2) + '0';
            ans = c + ans;
            k/=2;
        }
        cout << ans << ' ';
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
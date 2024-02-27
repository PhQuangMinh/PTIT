#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    long long p, q;
    cin >> p >> q;
    while (1){
        if (q%p==0){
            cout << 1 << '/' << q/p;
            return;
        }
        long long tmp = q/p+1;
        cout << 1 << '/' << tmp << " + ";
        p = p*tmp-q;
        q*=tmp;
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
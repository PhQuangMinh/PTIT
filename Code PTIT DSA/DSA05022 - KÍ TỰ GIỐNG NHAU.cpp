#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n, ins, del, cop;
    cin >> n >> ins >> del >> cop;
    int f[n+5];
    f[1] = ins;
    for (int i=2;i<=n;i++){
        if (i%2==1){
            int tmp1 = f[i-1] + ins;
            int tmp2 = f[(i-1)/2] + cop + ins;
            int tmp3 = f[(i+1)/2] + cop + del;
            f[i] = min(tmp1, min(tmp2, tmp3));
        }
        else{
            f[i] = min(f[i-1] + ins, f[i/2]+cop);
        }
    }
    cout << f[n];
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
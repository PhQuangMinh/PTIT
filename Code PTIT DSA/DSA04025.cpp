#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
struct m2c{
    long long m[15][15];
};
m2c dv;
m2c nhan(m2c x, m2c y, int n, int m, int p){
    m2c ans;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=p;j++){
            ans.m[i][j] = 0;
            for (int k=1;k<=m;k++)
                ans.m[i][j] = (ans.m[i][j] + x.m[i][k] * y.m[k][j]) % mod;
        }
    }
    return ans;
}
m2c process(m2c a, int n, int k){
    if (k==0) return dv;
    m2c tmp = process(a, n, k/2);
    tmp = nhan(tmp, tmp, n, n, n);
    if (k%2) tmp = nhan(tmp, a, n, n, n);
    return tmp;
}
void solve(){
    int k;
    cin >> k;
    m2c a;
    for (int i=1;i<=2;i++)
        for (int j=1;j<=2;j++){
            if (i==1 && j==1) a.m[i][j] = 0;
            else a.m[i][j] = 1;
            if (i==j) dv.m[i][j] = 1;
            else dv.m[i][j] = 0;
        }
    m2c ans = process(a, 2, k);
    m2c x;
    x.m[1][1] = 0;
    x.m[2][1] = 1;
    ans = nhan(ans, x, 2, 2, 1);
    cout << ans.m[1][1];
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
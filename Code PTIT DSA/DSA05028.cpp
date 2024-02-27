#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int f[n+1][m+1] = {};
    for (int i=0;i<=n;i++){
        for (int j=0;j<=m;j++){
            if (i==0) f[i][j] = j;
            else   
                if (j==0) f[i][j] = i;
                else
                    if (a[i-1]==b[j-1]){
                        f[i][j] = f[i-1][j-1];
                    }
                    else{
                        f[i][j] = min({f[i-1][j], f[i][j-1], f[i-1][j-1]})+1;
                    }
        }
    }
    cout << f[n][m];
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
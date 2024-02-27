#include<bits/stdc++.h>
using namespace std;
#define ll long long
int f[1005][1005];
void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    s1 = " " + s1;
    s2 = " " + s2;
    int n = s1.size();
    int m = s2.size();
    for (int i=0;i<=n;i++)
        for (int j=0;j<=m;j++)
            f[i][j] = 0;
    for (int i=1;i<n;i++)
        for (int j=1;j<m;j++){
            if (s1[i]==s2[j]) f[i][j] = f[i-1][j-1]+1;
            else f[i][j] = max(f[i-1][j], f[i][j-1]);
        }
    cout << f[n-1][m-1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
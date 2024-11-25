#include<bits/stdc++.h>
using namespace std;
int mod=1e9;
int value=0;
int d[1000];
int a[50][50];
int b[1000];
int n, amin;
int ans;
void Try(int i){
    if (value>=ans) return;
    for (int j=1;j<=n;j++)
        if (d[j]==0){
            value+=a[b[i-1]][j];
            d[j]=1;
            b[i]=j;
            if (i==n){
                ans = min(ans, value);
            }
            else 
                if (value + (n-i+1)*amin<ans) Try(i+1);
            value-=a[b[i-1]][j];
            d[j]=0;
        }
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
//            if (i!=j) amin=min(amin, a[i][j]);
        }
    if (n<=1){
        cout << 0;
        return;
    }
    ans = mod;
    for (int i=1;i<=n;i++){
        value = 0;
        memset(d, 0, sizeof(d));
        d[i] = 1;
        b[1] = i;
        Try(2);
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
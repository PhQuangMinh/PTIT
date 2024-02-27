#include<bits/stdc++.h>
using namespace std;
#define ll long long
int b[50][50];
int a[50];
int ans, n;
void in(){
    int sum = 0;
    for (int i=1;i<=n;i++){
        sum+=b[i][a[i]];
    }
    ans = max(ans, sum);
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> b[i][j];
    for (int i=1;i<=n;i++) a[i]=i;
    ans = 0;
    while (1){
        in();
        int k = n-1;
        while (k>0 && a[k]>a[k+1]) k--;
        if (k==0) break;
        for (int j=n;j>=1;j--)
            if (a[j]>a[k]){
                swap(a[k], a[j]);
                break;
            }
        int l=k+1, r=n;
        while (l<=r){
            swap(a[l], a[r]);
            l++;r--;
        }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int b[n+5];
    for (int i=1;i<=n;i++) b[i]=i;
    int cnt=0;
    while (1){
        cnt++;
        int ok = 1;
        for (int i=1;i<=n;i++)
            if (a[i]!=b[i]){
                ok=0;
            }
        if (ok){
            cout << cnt;
            return;
        }
        int k = n-1;
        while (k>0 && b[k]>b[k+1]) k--;
        if (k==0) return;
        for (int j=n;j>=1;j--)
            if (b[j]>b[k]){
                swap(b[k], b[j]);
                break;
            }
        int l=k+1, r=n;
        while (l<=r){
            swap(b[l], b[r]);
            l++;r--;
        }
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
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
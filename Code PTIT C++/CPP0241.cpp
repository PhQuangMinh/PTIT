#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int l=1, r=n;
    int ans=0;
    while (l<=r){
        if (a[l]==a[r]){
            l++;r--;
        }
        else
            if (a[l]>a[r]){
                a[r-1]+=a[r];
                r--;
                ans++;
            }
            else{
                a[l+1]+=a[l];
                l++;
                ans++;
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
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
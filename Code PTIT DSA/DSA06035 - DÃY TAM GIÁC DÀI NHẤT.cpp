#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int l[n+5]={0}, r[n+5] = {0};
    l[1] = 1;
    r[n]=1;
    for (int i =2;i<=n;i++){
        if (a[i]>=a[i-1]) l[i] = l[i-1]+1;
        else l[i]=1;
    }
     for (int i =n-1;i>=1;i--){
        if (a[i]>=a[i+1]) r[i] = r[i+1]+1;
        else r[i]=1;
    }
    int ans = 0;
    for (int i=1;i<=n;i++){
        ans = max(ans, l[i]+r[i]-1);
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
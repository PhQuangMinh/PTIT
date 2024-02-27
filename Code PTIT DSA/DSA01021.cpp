#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin >> n >> k;
    int a[k+5];
    for (int i=1;i<=k;i++) cin >> a[i];
    int i = k;
    int b[k+5];
    while (i>0 && a[i]==n-k+i) i--;
    if (i==0){
        cout << k;
        return;
    }
    for (int j=1;j<i;j++) b[j]=a[j];
    b[i] = a[i]+1;
    for (int j=i+1;j<=k;j++) b[j]= b[j-1]+1;
    int ans = 0;
    for (int i=1;i<=k;i++){
        int ok = 1;
        for (int j=1;j<=k;j++)
            if (a[i]==b[j]) ok=0;
        if (ok) ans++;
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
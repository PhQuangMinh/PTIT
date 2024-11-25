#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
void solve(){
    int n, x;
    cin >> n >> x;
    int a[n+5];
    for (int i=0;i<n;i++)
        cin >> a[n-i-1];
    long long ans=0;
    long long tmp=1;
    for (int i=0;i<n;i++){
        ans+=tmp*a[i];
        tmp*=x;
        tmp%=mod;
        ans%=mod;
    }
    cout << ans;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
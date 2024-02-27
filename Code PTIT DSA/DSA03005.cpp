#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
void solve(){
    cin >> n >> k;
    int a[n+5];
    int sum=0;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a+1, a+n+1);
    if (k>n-k) k=n-k;
    for (int i=1;i<=k;i++){
        sum-=a[i]*2;
    }
    cout << abs(sum);
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
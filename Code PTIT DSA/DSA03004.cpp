#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
void solve(){
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    long long min1 = 0, min2 = 0;
    for (int i=1;i<=n;i+=2){
        min1=min1*10+a[i];
        if (i<n) min2= min2*10+a[i+1];
    }
    cout << min1 + min2;
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
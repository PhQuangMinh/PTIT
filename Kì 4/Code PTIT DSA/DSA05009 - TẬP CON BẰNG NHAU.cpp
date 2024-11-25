#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
int a[200];
int sum, n;
bool ans;
void Try(int i, int s){
    if (s==sum/2) ans = true;
    if (ans || i==n) return;
    if (s+a[i]>sum/2){
        Try(i+1, s);
        return;
    }
    Try(i+1, s+a[i]);
}
void solve(){
    cin >> n;
    sum = 0;
    for (int i=1;i<=n;i++) 
    {
        cin >> a[i];
        sum+=a[i];
    }
    if (sum%2){
        cout << "NO";
        return;
    }
    ans = false;
    Try(1, 0);
    if (ans) cout << "YES";
    else cout << "NO";
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
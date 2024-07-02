#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, k;
int a[2000];
int ans;
int s;
void Try(int i, int cnt){
    if (i==n+1 && cnt==k){
        ans++;
        return;
    }
    int sum=0;
    for (int j=i;j<=n;j++){
        sum+=a[j];
        if (s==sum){
            Try(j+1, cnt+1);
        }
    }
}
void solve(){
    cin >> n >> k;
    s = 0;
    for (int i=1;i<=n;i++){
        cin >> a[i];
        s+=a[i];
    }
    if (s%k!=0){
        cout << 0;
        return;
    }
    s/=k;
    ans = 0;
    Try(1, 0);
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
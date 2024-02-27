#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n, k;
int a[25];
int b[25];
void Try(int j){
    for (int i=b[j-1]+1;i<=n;i++){
        b[j] = i;
        if (j==k){
            for (int m=1;m<=k;m++) cout << a[b[m]] << ' ';
            cout << '\n';
        }
        else Try(j+1);
    }
}
void solve(){
    cin >> n >> k;
    for (int i=1;i<=n;i++) cin >> a[i];
    sort(a+1, a+n+1);
    b[0] = 0;
    Try(1);
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
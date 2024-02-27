#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int b[100];
vector<vector<int>> ans;
void check(int n, int k){
    int sum = 0;
    vector<int> tmp;
    for (int i=1;i<=n;i++)
        if (a[i]){
            sum+=b[i];
            tmp.push_back(b[i]);
        }
    if (sum==k) ans.push_back(tmp);
}
void Try(int i, int n, int k){
    for (int j=0;j<=1;j++){
        a[i]=j;
        if (i==n) check(n, k);
        else Try(i+1, n, k);
    }
}
void solve(){
    int n, k;
    cin >> n >> k;
    for (int i=1;i<=n;i++) cin >> b[i];
    Try(1, n, k);
    for (auto tmp:ans){
        for (auto x:tmp) cout << x << " ";
        cout << "\n";
    }
    cout << ans.size();
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
//    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
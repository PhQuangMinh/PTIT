#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin >> s;
    int a[1000]={0};
    for (auto x:s)
        a[x]++;
    for (auto x:s)
        if (a[x]==1){
            cout << x;
            a[x]=0;
        }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
 //   solve();
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[10]={0};
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        while (x){
            a[x%10]++;
            x/=10;
        }
    }
    for (int i=0;i<=9;i++)
        if (a[i]) cout << i << " ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
//    solve();
}
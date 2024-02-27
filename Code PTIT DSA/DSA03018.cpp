#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    int d=0;
    int cnt7=-1;
    while (d*7<=n){
        if ((n-d*7)%4==0){
            cnt7=d;
        }
        d++;
    }
    if (cnt7==-1){
        cout << -1;
        return;
    }
    int cnt4 = (n-cnt7*7)/4;
    for (int i=1;i<=cnt4;i++) cout << 4;
    for (int i=1;i<=cnt7;i++) cout << 7;
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
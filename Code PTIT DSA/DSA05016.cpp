#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
ll bad[10005];
void ugly(){
    int d2=1, d3=1, d5=1;
    bad[1]=1;
    for (int i=2;i<=10001;i++){
        bad[i]=min(bad[d2]*2, min(bad[d3]*3, bad[d5]*5));
        if (bad[i]==bad[d2]*2) d2++;
        if (bad[i]==bad[d3]*3) d3++;
        if (bad[i]==bad[d5]*5) d5++;
    }
}
void solve(){
    int n;
    cin >> n;
    cout << bad[n];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    ugly();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
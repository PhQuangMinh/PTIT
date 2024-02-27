#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long f[100];
void fibo(){
    f[1] = 1;
    for (int i=2;i<=55;i++)
        f[i] = 2*f[i-1]+1;
}
int process(int n, long long k){
    if (k==f[n]/2+1) return n;
    else 
        if (k>f[n]/2+1) return process(n-1, k-f[n]/2-1);
    return process(n-1, k);
}
void solve(){
    int n;
    long long k;
    cin >> n >> k;
    cout << process(n, k);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    fibo();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
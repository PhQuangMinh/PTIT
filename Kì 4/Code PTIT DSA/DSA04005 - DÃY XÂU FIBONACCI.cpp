#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long f[100];
void fibo(){
    f[1] = 1;
    f[2] = 1;
    for (int i=3;i<=93;i++)
        f[i] = f[i-1]+f[i-2];
}
char process(int n, long long k){
    if (n==1) return 'A';
    if (n==2) return 'B';
    if (k>f[n-2]) return process(n-1, k-f[n-2]);
    return process(n-2, k);
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
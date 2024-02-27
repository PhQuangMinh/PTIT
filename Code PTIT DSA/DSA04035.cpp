#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 + 7;
long long process(long long a, long long b){
    if (b==0) return 1;
    long long tmp = process(a, b/2)%mod;
    tmp = (tmp*tmp)%mod;
    if (b%2) tmp = (tmp*a)%mod;
    return tmp;
}
void solve(long long a, long long b){
    cout << process(a, b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    long long a, b;
    while (1){
        cin >> a >> b;
        if (a==0 && b==0) return 0;
        solve(a, b);
        cout << '\n';
    }
}
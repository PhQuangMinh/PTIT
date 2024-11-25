#include<bits/stdc++.h>
using namespace std;
long long chiaDu(long long a, long long b, long long m){
    if (b==0) return 1;
    long long tmp = chiaDu(a, b/2, m)%m;
    tmp = (tmp*tmp)%m;
    if (b%2==1) return (tmp*a)%m;
    return tmp;
}
void solve(){
    string a;
    long long b, m;
    cin >> a >> b >> m;
    long long tmp=0;
    for (auto x:a){
        tmp = tmp*10 + (x-'0');
        tmp%=m;
    }
    cout << chiaDu(tmp, b, m);
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
#include<bits/stdc++.h>
using namespace std;
void chiaDu(string s, long long t){
    long long tmp=0;
    for (auto x:s){
        tmp=tmp*10+(x-'0');
        tmp%=t;
    }
    cout << tmp;
}
void solve(){
    string s;
    long long t;
    cin >> s >> t;
    chiaDu(s, t);
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
    // solve();
}
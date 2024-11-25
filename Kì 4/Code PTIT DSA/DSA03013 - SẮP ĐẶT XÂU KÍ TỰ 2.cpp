#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int d;
    cin >> d;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int a[200]={0};
    int ma = 0;
    int n = s.size();
    for (int i=0;i<n;i++){
        a[s[i]]++;
        ma = max(ma, a[s[i]]);
    }
    if (n%d==0 && ma>n/d || n%d!=0 && ma>n/d+1) cout << -1;
    else cout << 1;
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int convert(string s, int k){
    int ans = 0;
    int d = 1;
    for (int i=s.size()-1;i>=0;i--){
        ans += (s[i]-'0')*d;
        d*=k;
    }
    return ans;
}
void solve(){
    int k;
    string a, b;
    cin >> k >> a >> b;
    int x = convert(a, k);
    int y = convert(b, k);
    int tong = x+y;
    string ans;
    while (tong){
        char c = (tong%k)+'0';
        tong/=k;
        ans= c+ans;
    }
    cout << ans;
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
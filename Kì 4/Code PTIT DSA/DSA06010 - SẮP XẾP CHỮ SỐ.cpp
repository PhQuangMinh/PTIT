#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    cin.ignore();
    map<int, int> mp;
    string s;
    getline(cin, s);
    for (auto x:s){
        if (x>='0' && x<='9') mp[x-'0']++;
    }
    for (int i=0;i<=9;i++)
        if (mp[i]) cout << i << ' ';
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
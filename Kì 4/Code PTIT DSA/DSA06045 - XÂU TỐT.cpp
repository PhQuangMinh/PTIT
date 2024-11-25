#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> tmp;
    int d=1;
    for (int i=1;i<n;i++){
        if (s[i]==s[i-1]){
            d++;
        }
        else{
            tmp.push_back(d);
            d=1;
        }
    }
    tmp.push_back(d);
    ll cnt = 0;
    for (int i=0;i<tmp.size()-1;i++){
        if (tmp[i]==1 || tmp[i+1]==1){
            cnt += max(tmp[i], tmp[i+1]);
        }
        else{
            cnt += tmp[i]+tmp[i+1]-1;
        }
    }
    cout << 1ll*n*(n-1)/2-cnt;
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
    // cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
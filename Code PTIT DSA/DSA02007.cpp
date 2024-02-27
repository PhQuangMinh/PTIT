#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> k;
    string s;
    cin >> s;
    n = s.size();
    for (int i=0;i<n-1;i++){
        if (k==0) break;
        int id=i;;
        int ma = s[i];
        for (int j=i+1;j<n;j++){
            if (s[j]>=ma){
                ma = s[j];
                id = j;
            }
        }
        if (id != i){
            k--;
            swap(s[i], s[id]);
        }
    }
    cout << s;
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
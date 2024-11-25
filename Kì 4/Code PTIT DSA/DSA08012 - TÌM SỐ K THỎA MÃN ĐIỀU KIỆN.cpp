#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int n;
vector<int> a;
bool vs[10];
void Try(int i){
    a.push_back(i);
    for (int j = 0; j <= 5; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            Try(i * 10 + j);
            vs[j] = false;
        }
    }
}
void init(){
    for (int i=1;i<=5;i++){
        vs[i] = true;
        Try(i);
        vs[i] = false;
    }
    a.push_back(0);
    sort(a.begin(), a.end());
}
void solve(){
    int n, m;
    cin >> n >> m;
    int l = lower_bound(a.begin(), a.end(), n) - a.begin();
    int r = upper_bound(a.begin(), a.end(), m) - a.begin();
    cout << r-l;
    
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    init();
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
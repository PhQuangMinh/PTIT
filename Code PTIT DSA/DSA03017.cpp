#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int k;
    cin >> k;
    string s;
    cin >> s;   
    if (k>=s.size()){
        cout << 0;
        return;
    }
    int d[200]={0};
    for (auto x:s) d[x]++;
    priority_queue<int> pq;
    for (auto x:s){
        if (d[x]){
            pq.push(d[x]);
            d[x]=0;
        }
    }
    while (k>0){
        int tmp = pq.top();
        pq.pop();
        tmp--;
        pq.push(tmp);
        k--;
    }
    int ans = 0;
    while (!pq.empty()){
        int tmp = pq.top();
        ans += tmp*tmp;
        pq.pop();
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
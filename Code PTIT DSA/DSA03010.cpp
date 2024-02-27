#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
void solve(){
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        pq.push(x);
    }
    long long ans = 0;
    while (pq.size()>1){
        int tmp1 = pq.top();
        pq.pop();
        int tmp2 = pq.top();
        pq.pop();
        ans +=tmp1+tmp2;
        pq.push(tmp1+tmp2);
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
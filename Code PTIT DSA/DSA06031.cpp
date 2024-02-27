#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
void solve(){
    int n, k;
    cin >> n >> k;
    int a[n+5];
    for (int i=1;i<=n;i++){
        cin >> a[i];
    }
    deque<int> tmp;
    for (int i=1;i<=n;i++){
        if (!tmp.empty() && tmp.front()==i-k) tmp.pop_front();
        while (!tmp.empty() && a[tmp.back()]<=a[i]) tmp.pop_back();
        tmp.push_back(i);
        if (i>=k) cout << a[tmp.front()] << ' ';
    }
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
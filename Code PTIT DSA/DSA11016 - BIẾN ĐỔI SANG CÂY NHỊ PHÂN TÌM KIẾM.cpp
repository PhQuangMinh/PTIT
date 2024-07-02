#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    int n;
    cin >> n;
    map<int, int> mp;
    int x, y;
    char c;

    while (n--)
    {
        cin >> x >> y >> c;
        mp[x] = mp[y] = 1;
    }

    for (auto i : mp)
        cout << i.first << " ";
    cout << "\n";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
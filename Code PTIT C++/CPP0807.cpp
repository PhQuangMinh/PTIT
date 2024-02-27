#include <bits/stdc++.h>
using namespace std;
#define ll long long
int cmp(int a, int b){
    return a<b;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("DATA.in", "r", stdin);
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int> ans;
    for (int i=0;i<m;i++){
        int x;
        cin >> x;
        if (mp[x]>0) ans.push_back(x);
        mp[x] = -1;
    }
    sort(ans.begin(), ans.end());
    for (auto x:ans) cout << x << " ";
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<vector<int>> ans;
    while (n>1){
        ans.push_back(a);
        vector<int> b;
        for (int i=0;i<n-1;i++)
            b.push_back(a[i]+a[i+1]);
        a=b;
        n--;
    }
    ans.push_back(a);
    reverse(ans.begin(), ans.end());
    for (auto tmp:ans){
        cout << '[';
        for (int i=0;i<tmp.size();i++){
            cout << tmp[i];
            if (i!=tmp.size()-1) cout << ' ';
            else cout << "] ";
        }
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
    int n=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
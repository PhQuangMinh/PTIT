#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
vector<vector<int>> ans;
void col(int n, int a[]){
    vector<int> tmp;
    for (int i=1;i<=n;i++) tmp.push_back(a[i]);
    ans.push_back(tmp);
}
void in(vector<vector<int>> ans){
    reverse(ans.begin(), ans.end());
    int n = ans.size();
    for (int i = 0;i<n;i++){
        cout << "Buoc " << n-i-1 << ": ";
        for (auto x:ans[i]) cout << x << ' ';
        cout << '\n'; 
    }
}
void solve(){
    ans.clear();
    int n;
    cin >> n;
    int a[n+5];
    for (int i=1;i<=n;i++) cin >> a[i];
    int b[n+5];
    b[1] = a[1];
    col(1, b);
     for (int i=2;i<=n;i++){
        int tmp = a[i];
        int j = i-1;
        while (j>0 && b[j]>a[i]){
            b[j+1] = b[j];
            j--;
        }
        b[j+1] = a[i];
        col(i, b);
    }
    in(ans);
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
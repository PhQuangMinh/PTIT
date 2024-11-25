#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
int a[15];
int b[15]={0};
vector<vector<int>> ans;
void in(){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=a[i]*b[i];
    }
    if (sum==k){
        vector<int> tmp;
        for (int i=1;i<=n;i++)
            if (a[i]) tmp.push_back(b[i]);
        ans.push_back(tmp);
    }
}
void solve(){
    ans.clear();
    cin >> n >> k;
    for (int i=1;i<=n;i++) cin >> b[i];
    sort(b+1, b+n+1);
    while (1){
        in();
        int i = n;
        while (i>0 && a[i]==1){
            a[i] = 0;
            i--;
        }
        if (i==0) break;
        a[i]=1;
    }
    if (ans.empty()){
        cout << -1;
        return;
    }
    reverse(ans.begin(), ans.end());
    for (auto tmp:ans){
        cout << "[";
        for (int i=0;i<tmp.size();i++){
            cout << tmp[i];
            if (i!=tmp.size()-1) cout << " ";
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
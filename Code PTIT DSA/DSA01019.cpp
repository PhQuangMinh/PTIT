#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n, k;
vector<string> ans;
void check(){
    for (int i=1;i<n;i++)
        if (a[i]==0 && a[i+1]==0) return;
    if (a[1]==0 && a[n]==1){
        string tmp;
        for (int i=1;i<=n;i++)
            if (a[i]==0) tmp+="H";
            else tmp+="A";
        ans.push_back(tmp);
    }
}
void Try(int i){
    for (int j=0;j<=1;j++){
        a[i] = j;
        if (i==n){
            check();
        }
        else Try(i+1);
    }
}
void solve(){
    ans.clear();
    cin >> n;
    Try(1);
    sort(ans.begin(), ans.end());
    for (auto x:ans) cout << x << '\n';
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
    }
}
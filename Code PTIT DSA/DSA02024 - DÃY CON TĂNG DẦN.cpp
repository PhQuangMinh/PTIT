#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> ans;
int n;
int b[100];
void sinh(int k){
    int a[50];
    for (int i=1;i<=k;i++) a[i]=i;
    while (1){
        vector<int> tmp;
        for (int i=1;i<=k;i++){
            tmp.push_back(b[a[i]]);
        }
        vector<int> tmp2(tmp.begin(), tmp.end());
        sort(tmp2.begin(), tmp2.end());
        if (tmp==tmp2) ans.push_back(tmp);
        int i = k;
        while (i>0 && a[i]==n-k+i) i--;
        if (i==0) return;
        a[i]++;
        for (int j=i+1;j<=k;j++) a[j] = a[j-1]+1;
    }
}
int cmp(vector<int> a, vector<int> b){
    string s="";
    for (auto x:a) s+=to_string(x) + " ";
    s.pop_back();
    string t="";
    for (auto x:b) t+=to_string(x) + " ";
    t.pop_back();
    return s<t;
}
void solve(){
    cin >> n;
    for (int i=1;i<=n;i++) cin >> b[i];
    for (int i=2;i<=n;i++){
        sinh(i);
    }
    sort(ans.begin(), ans.end(), cmp);
    for (auto tmp:ans){
        for (auto x:tmp) cout << x << " ";
        cout << '\n';
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
    // cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
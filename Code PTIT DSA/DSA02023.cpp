#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100];
int n, k;
string b[100];
vector<vector<string>> ans;
map<vector<string>, int> mp;
void in(){
    string s="";
    vector<string> tmp;
    for (int i=1;i<=k;i++) tmp.push_back(b[a[i]]);
    sort(tmp.begin(), tmp.end());
    if (mp[tmp]==0) ans.push_back(tmp);
    mp[tmp]=1;
}
void Try(int i){
    for (int j =a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if (i==k){
            in();
        }
        else Try(i+1);
    }
}
void solve(){
    cin >> n >> k;
    map<string, int> m;
    int d=0;
    for (int i=1;i<=n;i++){
        string x;
        cin >> x;
        if (m[x]==0){
            b[++d] =x;
        }
        m[x]=1;
    }
    n=d;
    sort(b+1, b+n+1);
    Try(1);
    for (auto tmp:ans){
        for (int i = 0;i<k;i++){
            cout << tmp[i];
            if (i!=k) cout << ' ';
        }
        cout << "\n";
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[100], b[100];
int n, k;
void in(){
    for (int i=1;i<=k;i++) cout << b[a[i]] << ' ';
    cout << '\n';
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
    map<int, int> mp;
    int d=0;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        if (mp[x]==0) b[++d]=x;
        mp[x]=1;
    }
    n=d;
    sort(b+1, b+n+1);
    Try(1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
    int n=1;
    // cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
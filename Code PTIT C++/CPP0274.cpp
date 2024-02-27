#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; 
    cin>>n; 
    map<int, int> m; 
    for(int i = 0;i<n;i++){ 
        int x;
        cin >> x;
        m[x]++; 
    } 
    int ans = 0; 
    for(auto t : m){ 
        if(t.second>1) ans+=t.second; 
    } 
    cout << ans;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
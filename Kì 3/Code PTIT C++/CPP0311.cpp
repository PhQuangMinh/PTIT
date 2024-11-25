#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a[200]={0};
    string s;
    cin >> s;
    int n=s.size();
    for (int i=0;i<n;i++){
        a[s[i]]++;
        if (n%2==0 && a[s[i]]>n/2 || n%2==1 && a[s[i]]>n/2+1){
            cout << 0;
            return;
        }
    }
    cout << 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
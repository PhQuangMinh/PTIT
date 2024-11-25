#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin >> s;
    int tong=0;
    int dem[200] ={0};
    for (auto x:s){
        if (x>='0' && x<='9') tong+=x-'0';
        else dem[x]++;
    }
    for (char i='A';i<='Z';i++)
        for (int j=1;j<=dem[i];j++) cout << i;
    cout << tong;
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
//    solve();
}
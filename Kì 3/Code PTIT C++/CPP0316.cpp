#include<bits/stdc++.h>
using namespace std;
int tongChuSo(int s){
    while (s>=10){
        int sum=0;
        while (s!=0){
            sum+=s%10;
            s/=10;
        }
        s=sum;
    }
    if (s==9) return 1;
    return 0;
}
void solve(){
    string s;
    cin >> s;
    int sum=0;
    for (char c:s){
        sum+=c-'0';
    }
    if (tongChuSo(sum)==1) cout << 1;
    else cout << 0;
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
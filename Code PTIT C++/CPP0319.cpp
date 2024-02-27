#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m, s;
    cin >> m >> s;
    if (s==0 && m==1){
        cout << "0 0";
        return;
    }
    if (s==0 && m>1 || s>9*m){
        cout << "-1 -1";
        return;
    }
    vector<int> maxs;
    for (int i=0;i<m;i++){
        if (s>0){
            if (s>=9){
                maxs.push_back(9);
                s-=9;
            }
            else{
                maxs.push_back(s);
                s=0;
            }
        }
        else maxs.push_back(0);
    }
    vector<int> mins=maxs;
    reverse(mins.begin(), mins.end());
    int j=0;
    if (mins[0]==0){
        while (mins[j]==0 && j<m) j++;
        mins[j]--;
        mins[0]=1;
    }
    for (auto x:mins) cout << x;
    cout << " ";
    for (auto x:maxs) cout << x;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    // int n;
    // cin >> n;
    // for (int i=1;i<=n;i++){
    //     solve();
    //     if (i!=n) cout << "\n";
    // }
    solve();
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> ans;
int check(int a[]){
    int ngay = a[1]*10+a[2];
    int thang = a[3]*10+a[4];
    if (a[5]==0 || ngay==0 || thang<1 || thang>12) return 0;
    return 1;
}
void solve(){
    int a[10]={0};
    while (1)
    {
        if (check(a)){
            vector<int> tmp;
            for (int i=1;i<=8;i++){
                tmp.push_back(a[i]);
            }
            ans.push_back(tmp);
        }
        int i = 8;
        while (i>0 && a[i]==2){
            a[i]=0;
            i--;
        }
        if (i==0) break;
        a[i]=2;
    }
    for (auto tmp:ans){
        for (int i=0;i<tmp.size();i++){
            cout << tmp[i];
            if (i==1 || i==3) cout << "/";
        }
        cout <<  '\n';
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
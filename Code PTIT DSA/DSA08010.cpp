#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    cin >> a;
    set<int> luu;
    queue<pair<int, int>> qu;
    qu.push({a, 0});
    int res=1e9;
    while (qu.size()){
        int x=qu.front().first;
 //       cout << x << "\n";
        if (x==1){
            cout << qu.front().second;
            return;
 //           res=min(res, qu.front().second);
        }
        if (luu.find(x-1) == luu.end() && x-1>0){
            qu.push({x-1, qu.front().second+1});
            luu.insert(x-1);
        }
        for (int i=2;i*i<=x;i++)
            if (x%i==0){
                int tmp=x/i;
                if (luu.find(tmp)==luu.end()){
                    qu.push({tmp, qu.front().second+1});
                    luu.insert(tmp);
                }
            }
        qu.pop();
    }
//    cout << res;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
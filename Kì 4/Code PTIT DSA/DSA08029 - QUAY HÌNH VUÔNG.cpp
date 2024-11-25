#include<bits/stdc++.h>
using namespace std;
void solve(){
    queue<pair<vector<int>, int>> qu;
    vector<int> a;
    for (int i=1;i<=6;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> b;
    for (int i=1;i<=6;i++){
        int x;
        cin >> x;
        b.push_back(x);
    }
    set<vector<int>> luu;
    luu.insert(a);
    qu.push({a, 0});
    while (qu.size()){
        vector<int> tmp=qu.front().first;
        if (tmp==b){
            cout << qu.front().second;
            return;
        }
        vector<int> trai;
        trai=tmp;
        trai[0]=tmp[3];trai[1]=tmp[0];trai[3]=tmp[4];trai[4]=tmp[1];
        vector<int> phai;
        phai=tmp;
        phai[1]=tmp[4];phai[2]=tmp[1];phai[4]=tmp[5];phai[5]=tmp[2];
        if (luu.find(trai)==luu.end()){
            qu.push({trai, qu.front().second+1});
            luu.insert(trai);
        }
        if (luu.find(phai)==luu.end()){
            qu.push({phai, qu.front().second+1});
            luu.insert(phai);
        }
        qu.pop();
    }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
void solve(){
    string st, en;
    cin >> st >> en;
    pair<int, int> bd, kt;
    bd.first = st[0]-'a'+1;
    bd.second = st[1] - '0';
    kt.first = en[0]-'a'+1;
    kt.second = en[1] - '0';
    queue<pair<pair<int, int>, int>> qu;
    qu.push({bd, 0});
    map<pair<int,int>, int> mp;
    int dx[10] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int dy[10] = {-2, -1, 1, 2, 2, 1, -1, -2};
    while (!qu.empty()){
        pair<pair<int, int>, int> u = qu.front();
        qu.pop();
        pair<int, int> x = u.first;
        int y = u.second;
        if (x.first==kt.first && x.second == kt.second){
            cout << y;
            return;
        }
        for (int i=0;i<8;i++){
            int a = x.first+dx[i];
            int b = x.second + dy[i];
            if (a>=1 && a<=8 && b>=1 && b<=8){
                qu.push({{a, b}, y+1});
            }
        }
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
    int t=1;
    cin >> t;
    for (int i=1;i<=t;i++){
        solve();
        if (i!=t) cout << "\n";
    }
}
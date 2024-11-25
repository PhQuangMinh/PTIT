#include<iostream>
#include <vector>
#include <queue>
#include<algorithm>
using namespace std;
const int mod = 1e9+7;
int a[30][30];
int n;
int d[30][30];
int t[30][30];
void duyet(int u, int v){
    vector<int> ans;
    ans.push_back(u);
    while (u!=v)
    {
        u = t[u][v];
        ans.push_back(u);
    }
    for (int i=0;i<ans.size();i++){
        cout << ans[i];
        if (i!=ans.size()-1) cout << " --> ";
    }
}
void floyd(){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            d[i][j] = a[i][j];
            if (d[i][j]==mod) t[i][j] = 0;
            else t[i][j] = j;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if (d[j][i] != mod && d[j][k] > (d[j][i] + d[i][k])){
                    d[j][k] = d[j][i] + d[i][k];
                    t[j][k] = t[j][i];
                }
            }
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int u = i, v = j;
            cout << "K/c " << u << " -> " << v << " = ";
            if (u==v){
                cout << "0;   " << u << '\n';
                continue;  
            }
            cout << d[u][v] << ";   ";
            duyet(u, v);
            cout << '\n';
        }
        cout << '\n';
    }
}
int main(){
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
            if (i!=j && a[i][j]==0) a[i][j] = mod;
        }
    }
    floyd();
}
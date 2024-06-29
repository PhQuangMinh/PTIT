#include<iostream>
#include <vector>
#include <queue>
#include<algorithm>
using namespace std;
const int mod = 1e9+7;
int a[30][30];
int n, s;
int d[30];
int pre[30];
void bellmanFord(){
    for (int i=1;i<=n;i++){
        d[i] = a[s][i];
        pre[i] = s;
    }
    d[s] = 0;
    for (int k=1;k<=n-2;k++){
        for (int v=1;v<=n;v++){
            if (v!=s){
                for (int u=1;u<=n;u++){
                    if ((d[v]>d[u] + a[u][v]) && d[u]!=mod && a[u][v]!=mod){
                        d[v] = d[u] + a[u][v];
                        pre[v] = u;
                    }
                }
            }
            // cout << d[v] << " " << pre[v] << '\n';
        }
        // cout << '\n';
    }
    for (int i=1;i<=n;i++){
        int v = i;
        cout << "K/c " << s << " -> " << v << " = "; 
        if (s==v){
            cout << "0;        " << s << " <- " << s << '\n';
            continue;  
        }
        if (d[v] == mod){
            cout << "INF;\n"; 
        }
        else{
            cout << d[v] << ";        ";
            while (s!=v){
                cout << v << " <- ";
                v = pre[v];
            }
            cout << s << '\n';
        }
    }
}
int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin >> n >> s;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
            if (a[i][j]==0) a[i][j] = mod;
            // cout << a[i][j] << ' ';
        }
        // cout << '\n';
    }
    bellmanFord();
}
#include<iostream>
#include<string.h>
using namespace std;
int n;
int a[20][20];
bool vs[20];
void dfs(int u){
    vs[u] = true;
    for (int i=1;i<=n;i++){
        if (a[u][i] && !vs[i]){
            dfs(i);
        }
    }
}
int main(){
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    }
    int cnt = 0;
    for (int i=1;i<=n;i++){
        memset(vs, false, sizeof(vs));
        dfs(i);
        for (int j=1;j<=n;j++){
            if (!vs[j]){
                cout << "not strongly connected";
                return 0;
            }
        }
    }
    cout << "strongly connected";
}
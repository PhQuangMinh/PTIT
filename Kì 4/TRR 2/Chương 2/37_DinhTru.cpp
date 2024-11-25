#include<iostream>
#include<string.h>
using namespace std;
int n;
int a[20][20];
bool vs[20];
void dfs(int u){
    vs[u] = true;
    for (int i=1;i<=n;i++){
        if (!vs[i] && a[u][i]){
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
    int lt = 0;
    for (int i=1;i<=n;i++){
        if (!vs[i]){
            dfs(i);
            lt++;
        }
    }
    for (int i=1;i<=n;i++){
        memset(vs, false, sizeof(vs));
        int dem = 0;
        vs[i] = true;
        for (int j=1;j<=n;j++){
            if (!vs[j]){
                dem++;
                dfs(j);
            }
        }
        if (dem>lt) cout << i << ' ';
    }
}
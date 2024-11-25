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
            lt++;
            dfs(i);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            if (a[i][j]){
                a[i][j] = 0;
                memset(vs, false, sizeof(vs));
                int dem = 0;
                for (int k=1;k<=n;k++){
                    if (!vs[k]){
                        dem++;
                        dfs(k);
                    }
                }
                a[i][j] = 1;
                if (dem>lt) cout << i << ' ' << j << '\n';
            }
        }
    }
}
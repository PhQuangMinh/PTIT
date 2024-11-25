#include<iostream>
using namespace std;
int n;
int a[20][20];
bool vs[20];
void dfs(int u){
    for (int i=1;i<=n;i++){
        if (a[u][i] && !vs[i]){
            vs[i] = true;
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
        if (!vs[i]){
            vs[i] = true;
            cnt++;
            dfs(i);
        }
    }
    cout << cnt;
}
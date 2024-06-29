#include<iostream>
using namespace std;
int n;
int a[10][10];
bool vs[10];
void dfs(int u){
    cout << u << ' ';
    for (int i=1;i<=n;i++){
        if (!vs[i] && a[u][i]){
            vs[i]=true;
            a[u][i] = 0;
            dfs(i);
        }
    }
}
int main (){
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    vs[1] = true;
    dfs(1);
}

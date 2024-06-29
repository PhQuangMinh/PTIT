#include<iostream>
#include<queue>
using namespace std;
int n;
int a[10][10];
int vs[10];
void bfs(int u){
    queue<int> qu;
    qu.push(u);
    vs[u] = true;
    while (!qu.empty()){
        u = qu.front();
        qu.pop();
        cout << u << ' ';
        for (int i=1;i<=n;i++){
            if (a[u][i] && !vs[i]){
                vs[i] = true;
                a[u][i] = 1;
                qu.push(i);
            }
        }
    }
}
int main(){
    cin >> n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++)
            cin >> a[i][j];
    }
    bfs(5);
}
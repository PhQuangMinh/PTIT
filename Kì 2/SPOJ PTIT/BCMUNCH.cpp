#include<bits/stdc++.h>
using namespace std;
struct dt{
    int x, y, cnt;
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    char a[n+5][m+5]={};
    int x, y;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            cin >> a[i][j];
            if (a[i][j]=='C'){
                x=i;y=j;
            }
        }
    }
    a[1][1] = '.';
    queue<dt> qu;
    qu.push({x, y, 0});
    int dx[5] = {-1, 0, 1, 0};
    int dy[5] = {0, 1, 0, -1};
    while (!qu.empty()){
        dt u= qu.front();
        qu.pop();
        if (u.x==1 && u.y==1){
            cout << u.cnt;
            return 0;
        }
        for (int i=0;i<4;i++){
            x = u.x+dx[i];
            y = u.y+dy[i];
            if (a[x][y]=='.' && x>=1 && y>=1 && x<=n && y<=m){
            	a[x][y] = '*';
                qu.push({x, y, u.cnt+1});
            }
        }
    }
}
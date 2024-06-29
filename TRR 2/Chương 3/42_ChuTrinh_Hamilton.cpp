#include<iostream>
using namespace std;
int n;
int a[25][25];
int ans[25];
bool vs[25];
void in(){
    for (int i=1;i<=n+1;i++) cout << ans[i] << ' ';
    cout << '\n';
}
void Try(int k){
    for (int i=1;i<=n;i++){
        if (a[ans[k-1]][i] && !vs[i]){
            vs[i] = true;
            ans[k] = i;
            if (k<=n){
                Try(k+1);
            }
            else
                if (ans[k]==ans[1]) in();
            vs[i] = false;
        }
    }
}
void hamilton(int u){
    for (int i=1;i<=n;i++) vs[i] = false;
    ans[1] = u;
    Try(2);
}
int main(){
    #ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cin >> n;
    // int u;
    // cin >> u;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++) 
            cin >> a[i][j];
    }
    hamilton(10);
}
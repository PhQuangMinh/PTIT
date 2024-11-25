#include<iostream>
#include<stack>
using namespace std;
int n;
int a[10][10];
bool vs[10];
void dfs(int u){
    stack<int> st;
    st.push(u);
    vs[u] = true;
    cout << u << ' ';
    while (!st.empty()){
        u = st.top();
        st.pop();
        for (int i=1;i<=n;i++){
            if (!vs[i] && a[u][i]){
                st.push(u);
                st.push(i);
                cout << i << ' ';
                vs[i] = true;
                break;
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
    dfs(1);
}

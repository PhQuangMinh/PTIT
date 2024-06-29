#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int n;
int a[20][20];
void euler(int u){
    stack<int> st;
    st.push(u);
    vector<int> ans;
    while (!st.empty()){
        u = st.top();
        int ok = 1;
        for (int i=1;i<=n;i++){
            if (a[u][i]){
                st.push(i);
                a[u][i] = a[i][u] = 0;
                ok = 0;
                break;
            }
        }
        if (ok){
            st.pop();
            ans.push_back(u);
        }
    }
    for (int i=ans.size()-1;i>=0;i--) cout << ans[i] << ' ';
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
    euler(9);
}
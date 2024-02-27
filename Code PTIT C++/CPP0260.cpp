#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    vector<int> a;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++){
            int x;
            cin >> x;
            a.push_back(x);
        }
    sort(a.begin(), a.end());
    int d=0;
    int left = 1, right = n, top = 1, bottom = n;
    int b[n+5][n+5];
    while (d<n*n){
        for (int i=left;i<=right;i++)
            b[top][i] = a[d++];
        top++;
        for (int i = top;i<=bottom;i++)
            b[i][right] = a[d++];
        right--;
        for (int i=right;i>=left;i--)
            b[bottom][i] = a[d++];
        bottom--;
        for (int i = bottom;i>=top;i--)
            b[i][left] = a[d++];
        left++;
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout << b[i][j] << " ";
        }
        cout << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    solve();
}
#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void solve(){
    int n;
    cin >> n;
    memset(a, 0, sizeof(a));
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        if (x>0) a[x]=1;
    }
    for (int i=1;i<=1000000;i++)
        if (a[i]==0){
            cout << i;
            return;
        }
    cout << 1e6+1;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
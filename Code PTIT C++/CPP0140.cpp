#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long a[50]={6, 28, 496, 8128, 33550336, 8589869056, 137438691328};
    for (int i=0;i<7;i++)
        if (a[i]==n){
            cout << 1;
            return;
        }
    cout << 0;
}
int main(){
    // perfectnum();
    // for (int i=1;i<=d;i++)
    //     cout << per[i] << " ";
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
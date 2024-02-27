#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a;
    long long m;
    cin >> a >> m;
    int sum=0;
    for (int i=1;i<=a;i++)
        sum+=i%m;
    cout << sum;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
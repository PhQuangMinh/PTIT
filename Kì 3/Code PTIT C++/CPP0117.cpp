#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    while (n>9){
        int sum=0;
        while (n%10){
            n/=10;
            sum+=n%10;
        }
        n=sum;
    }
    cout << n;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
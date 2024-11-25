#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a, long long b){
    long long t=b%a;
    while (t!=0){
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
void solve(){
    int n;
    cin >> n;
    long long ans=1;
    for (long long i=1;i<=n;i++){
        ans=ans*i/ucln(ans, i);
    }
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
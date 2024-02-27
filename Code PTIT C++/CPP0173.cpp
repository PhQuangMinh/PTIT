#include<bits/stdc++.h>
using namespace std;
long long bcnn(long long a, long long b){
    long long tich=a*b;
    long long t=b%a;
    while (t!=0){
        t=a%b;
        a=b;
        b=t;
    }
    return tich/a;
}
void solve(){
    long long x, y, z;
    int n;
    cin >> x >> y >> z >> n;
    long long bc=bcnn(x, y);
    bc=bcnn(bc, z);
    long long beg=pow(10, n-1);
    if (beg*10<=bc){
        cout << -1;
        return;
    }
 //   cout << beg << " " << bc << " ";
    long long ans=(beg+bc-1)/bc*bc;
    cout << ans;
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
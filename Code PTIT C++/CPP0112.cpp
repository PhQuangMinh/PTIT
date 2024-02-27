#include<bits/stdc++.h>
using namespace std;
void solve(){
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    float kc=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
 //   kc=kc*1000/1000;
    printf("%.4lf", kc);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
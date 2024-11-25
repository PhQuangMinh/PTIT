#include<bits/stdc++.h>
using namespace std;
long long convert(long long x, int ok){
    long long d=1;
    long long tmp=0;
    while (x){
        int k=x%10;
        x/=10;
        if (k==5 || k==6)
           if (ok) k=6;
           else k=5;
        tmp=k*d+tmp;
        d*=10;
    }
    return tmp;
}
void solve(){
    long long a, b;
    cin >> a >> b;
    long long min1=convert(a, 0);
    long long min2=convert(b, 0);
    long long max1=convert(a, 1);
    long long max2=convert(b, 1);
    cout << min1+min2 << " " << max1+max2;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUGDE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif 
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
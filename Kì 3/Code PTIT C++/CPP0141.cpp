#include<bits/stdc++.h>
using namespace std;
long long f[100];
void solve(){
    f[1]=1;
    f[2]=1;
    for (int i=3;i<=92;i++)
        f[i]=f[i-1]+f[i-2];
}
int main(){
    int n;
    cin >> n;
    solve();
    for (int i=1;i<=n;i++){
        long long x;
        cin >> x;
        int ok=0;
        for (int j=1;j<=92;j++)
            if (f[j]==x) ok=1;
        if (ok) cout << "YES";
        else cout << "NO";
        if (i!=n) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void sang(){
    for (int i=2;i*i<=1000000;i++)
        if (nt[i]==0){
            for (int j=i*i;j<=1000000;j+=i)
                nt[j]=1;
        }
}
void solve(){
    int ans=0;
    int n;
    cin >> n;
    int can=sqrt(n);
    for (int i=2;i<=can;i++)
        if (nt[i]==0) ans++;
    cout << ans;
}
int main(){
    int n;
    cin >> n;
    sang();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
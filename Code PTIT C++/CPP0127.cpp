#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void sang(){
    nt[0]=1;
    nt[1]=1;
    for (int i=2;i*i<=1000000;i++)
        if (nt[i]==0){
            for (int j=i*i;j<=1000000;j+=i)
                nt[j]=1;
        }
}
void solve(){
    int n;
    cin >> n;
    for (int i=2;i<=n/2;i++)
        if (nt[i]==0 && nt[n-i]==0){
            cout << i << " " << n-i;
            return;
        }
    cout << "-1";
}
int main(){
    sang();
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
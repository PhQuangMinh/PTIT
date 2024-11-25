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
    cout << 1 << " ";
    int n;
    cin >> n;
    for (int i=2;i<=n;i++)
        if (nt[i]==0) cout << i << " ";
        else cout << nt[i];
}
int main(){
    sang();
    int n=1;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
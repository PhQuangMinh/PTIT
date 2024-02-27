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
    int n;
    cin >> n;
    for (int i=2;i<=n/2;i++)
        if (nt[i]==0 && nt[n-i]==0){
            cout << i << " " << n-i << "\n";
            return;
        }
}
int main(){
    int n;
    cin >> n;
    sang();
    for (int i=1;i<=n;i++){
        solve();
    }
}
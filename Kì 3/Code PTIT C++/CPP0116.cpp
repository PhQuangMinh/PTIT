#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void sang(){
    for (int i=2;i*i<=10000;i++)
        if (nt[i]==0){
            for (int j=i*i;j<=10000;j+=i)
                if (nt[j]==0) nt[j]=i;
        }
}
void solve(){
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i=2;i<=n;i++)
        if (nt[i]==0) cout << i << " ";
        else cout << nt[i] << " ";
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
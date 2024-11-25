#include<bits/stdc++.h>
using namespace std;
long long a[100];
void solve(){
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for (int i=3;i<=92;i++)
        a[i]=a[i-1]+a[i-2];
}
void solve(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        for (int j=0;j<=50;j++)
            if (x==a[j]){
                cout << x << " ";
                break;
            }
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
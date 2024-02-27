#include<bits/stdc++.h>
using namespace std;
int nt[1000005];
void sang(){
    nt[1]=1;
    nt[0]=1;
    for (int i=2;i*i<=1000000;i++)
        if (nt[i]==0){
            for (int j=i*i;j<=1000000;j+=i)
                nt[j]=1;
        }
}
void solve(){
    long long l, r;
    cin >> l >> r;
    if (l>r) swap(l, r);
    int beg=ceil(sqrt(l));
    int en=sqrt(r);
    int ans=0;
    for (int i=beg;i<=en;i++){
        if (nt[i]==0){
            ans++;
        }
    }
    cout << ans;
}
int main(){
    int n;
    sang();
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
struct matran{
    long long a[10][10];
};
matran donvi;
int mod=1e9+7;
matran nhan(matran x, matran y, int cot){
    matran ans;
    for (int i=1;i<=2;i++)
        for (int j=1;j<=cot;j++){
            long long sum=0;
            for (int k=1;k<=cot;k++){
                sum+=x.a[i][k]*y.a[k][j];
                sum%=mod;
            }
            ans.a[i][j]=sum;
        }
    return ans;
}
matran nhandonvi(matran x, int n){
    if (n==0) return donvi;
    matran tmp=nhandonvi(x, n/2);
    tmp=nhan(tmp, tmp, 2);
    if (n%2==0) return tmp;
    return nhan(tmp, x, 2);
}
void solve(){
    int n;
    cin >> n;
    matran bd;
    bd.a[1][1]=1;donvi.a[1][1]=1;
    bd.a[1][2]=1;donvi.a[1][2]=0;
    bd.a[2][1]=1;donvi.a[2][1]=0;
    bd.a[2][2]=0;donvi.a[2][2]=1;
    matran ans=nhandonvi(bd, n);
    matran f;
    f.a[1][1]=1;
    f.a[2][1]=0;
    ans=nhan(ans, f, 1);
    cout << ans.a[2][1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
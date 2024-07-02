#include<bits/stdc++.h>
using namespace std;
int res=1e9;
int value=0;
int d[1000];
int a[50][50];
int b[1000];
int n, amin;
void Try(int i){
    if (value>=res) return;
    for (int j=2;j<=n;j++)
        if (d[j]==0){
            value+=a[b[i-1]][j];
            d[j]=1;
            b[i]=j;
            if (i==n){
                if (value+a[b[n]][1]<res)
                    res=value+a[b[n]][1];
            }
            else Try(i+1);
            value-=a[b[i-1]][j];
            d[j]=0;
        }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++){
            cin >> a[i][j];
//            if (i!=j) amin=min(amin, a[i][j]);
        }
    if (n<=1){
        cout << 0;
        return 0;
    }
    d[1]=1;
    b[1]=1;
    Try(2);
    cout << res;
}

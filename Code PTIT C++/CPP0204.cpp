#include<bits/stdc++.h>
using namespace std;
int dem[100005]={0};
int snt[100005]={0};
void sangnt(){
    snt[1]=0;
    for (int i=2;i*i<=100000;i++)
        if (snt[i]==0){
            for (int j=i*i;j<=100000;j+=i)
                snt[j]=1;
        }
    dem[0]=0;
    for (int i=1;i<=100000;i++)
        if (snt[i]==0) dem[i]=dem[i-1]+1;
        else dem[i]=dem[i-1];
}
void solve(){
    int l, r;
    cin >> l >> r;
    cout << dem[r]-dem[l-1];
}
int main(){
    int n;
    cin >> n;
    sangnt();
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
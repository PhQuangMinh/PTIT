#include<bits/stdc++.h>
using namespace std;
int tcs(int n){
    int sum=0;
    while (n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int snt(int x){
    for (int i=2;i*i<=x;i++)
        if (x%i==0) return 0;
    return x>1;
}
string check(int n){
    int sum=0;
    int tmp=tcs(n);
    if (snt(n)){
        return "NO";
    }
    for (int i=2;i*i<=n;i++){
        if (n%i==0){
            while (n%i==0){
                n/=i;
                sum+=tcs(i);
            }
        }
    }
    if (n>1) sum+=tcs(n);
    if (sum==tmp) return "YES";
    return "NO";
}
void solve(){
    int n;
    cin >> n;
    cout << check(n);
}
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        solve();
        if (i!=n) cout << "\n";
    }
}
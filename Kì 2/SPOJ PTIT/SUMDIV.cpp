#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    long long sum=0;
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            if ((long long)i*i==n) sum+=i;
            else sum+=i+n/i;
        }
    }
    cout << sum << "\n";
}
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++) solve();
} 
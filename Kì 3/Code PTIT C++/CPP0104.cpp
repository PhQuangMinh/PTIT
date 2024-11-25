#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long sum=0;
    long long t=1;
    for (int i=1;i<=n;i++){
        t=t*i;
        sum+=t;
    }
    cout << sum;
}
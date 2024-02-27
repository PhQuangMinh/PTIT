#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i=1;i<=n;i++){
        int x;
        cin >> x;
        cout << (long long)x*(x+1)/2;
        if (i!=n) cout << "\n";
    }
}
#include<bits/stdc++.h>
using namespace std;
int check(int x){
    int chan=0, le=0;
    while (x){
        int k=x%10;
        if (k%2) le++;
        else chan++;
        x/=10;
    }
    return chan==le;
}
int main(){
    int n;
    cin >> n;
    int be=pow(10, n-1);
    int en=pow(10, n);
    int d=0;
    for (int i=be;i<en;i++){
        if (check(i)){
            cout << i << " ";
            d++;
            if (d==10){
                cout << "\n";
                d=0;
            }
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double sum=0;
    for (int i=1;i<=n;i++){
        sum+=1.0/i;
    }
    sum=(sum*10000)/10000;
    printf("%.4lf", sum);
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    long long xanh, vang;
    cin >> xanh >> vang;
    int k=xanh/2+2;
    long long dt=xanh+vang;
    long long denta=(long long)k*k-4*dt;
    long long can=sqrt(denta);
    long long dai=(k+can)/2;
    long long rong=dt/dai;
    if (dai>rong) cout << rong << " " << dai;
    else cout << dai << " " << rong;
} 
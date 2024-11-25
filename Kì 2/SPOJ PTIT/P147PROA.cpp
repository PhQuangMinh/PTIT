#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    long long a, b, c;
    cin >> a >> b >> c;
    long long tich=sqrt(a*b*c);
    long long c1=tich/a;
    long long c2=tich/b;
    long long c3=tich/c;
    cout << (c1+c2+c3)*4;
}
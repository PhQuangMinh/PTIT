#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int c, k; 
    cin >> c >> k;
    int d=1;
    for (int i=1;i<=k;i++) d*=10;
    int c1=c/d*d;
    int c2=c1+d;
    if (c-c1>=c2-c) cout << c2;
    else cout << c1;
}
 
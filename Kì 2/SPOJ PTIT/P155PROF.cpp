#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    long long x, y, n;
	cin >> x >> y >> n;
    if (n%6==0) n=-y+x;
    else if (n%6==1) n=x;
    else if (n%6==2) n=y;
    else if (n%6==3) n=y-x;
    else if (n%6==4) n=-x;
    else if (n%6==5) n=-y;
    n=n%mod;
    if (n<0) n+=mod;
    cout << n;
} 
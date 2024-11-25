#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int xa, xb, xc, ya, yb, yc;
	cin >> xa >> ya >> xb >> yb >> xc >> yc;
	int t1=xb-xa;
	int t2=yc-ya;
	int t3=yb-ya;
	int t4=xc-xa;
	long long t=(long long)t1*t2-(long long)t3*t4;
	if (t<0) cout << "RIGHT";
	else
	    if (t==0) cout << "TOWARDS";
	    else cout << "LEFT";
}
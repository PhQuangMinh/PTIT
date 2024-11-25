#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int scp(long long n){
	long long t=sqrt(n);
	if (t*t==n) return 1;
	return 0;
}
int main(){
	faster();
	long long a, b, x, y, z;
	cin >> a >> b >> x >> y >> z;
	if (x>=y+z || y>=x+z || z>=x+y){
		cout << "NO";
		return 0;
	}
	if (a>b) swap(a, b);
	if (z<x) swap(z, x);
	if (z<y) swap(z, y);
	if (x>y) swap(x, y);
	long long t=x*x+y*y;
	if (scp(t)==1 && sqrt(t)==z){		
//		cout << a << b << x << y << z << k;
		if (a>=x && b>=y) cout << "YES";
		else cout << "NO";
		return 0;
	}
	cout << "NO";
} 
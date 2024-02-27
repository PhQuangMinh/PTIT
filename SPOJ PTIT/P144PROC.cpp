#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long lt(long long a, long long b)
{
	if (b==0) return 1;
	if (b%2==0){
		long long kq=lt(a, b/2);
		return (kq*kq)%mod;
	}
	else{
		long long kq=lt(a, b-1);
		return (kq*a)%mod;
	}
}
int main(){
	faster();
	long long a, b;
	cin >> a >> b;
	while (a!=0 || b!=0){
		if (a==0) cout << 0 << "\n";
		else 
		    if (b==0) cout << 1 << "\n";
		    else cout << lt(a, b) << "\n";
		cin >> a >> b;
	}
}
 
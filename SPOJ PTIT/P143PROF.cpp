#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=123456789;
long long du(long long n){
	if (n==0) return 1;
	if (n%2==0){
		long long t=n/2;
		return ((du(t)%mod)*(du(t)%mod))%mod;
	}
	return ((du(n-1)%mod)*2)%mod;
}
int main(){
	faster();
	long long n;
	cin >> n;
	n--;
	cout << du(n);
} 
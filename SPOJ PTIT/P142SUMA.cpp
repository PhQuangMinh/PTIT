#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n;
	cin >> n;
	n*=2;
	for (long long i=1;i*i<=n;i++){
		long long t=n-i*(i+1);
		long long can=sqrt(t);
		if (can*(can+1)==t && can>0 && t+i*(i+1)==n){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
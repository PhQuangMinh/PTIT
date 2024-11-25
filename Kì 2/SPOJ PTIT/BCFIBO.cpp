#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	long long sum1=0;
	long long sum2=1;
	long long sum;
	for (int i=2;i<=n;i++){
		sum=(sum1%mod+sum2%mod)%mod;
		sum1=sum2;
		sum2=sum;
	}
	if (n==0) cout << "0";
	else
	    if (n==1) cout << "1";
		else cout << sum;
} 
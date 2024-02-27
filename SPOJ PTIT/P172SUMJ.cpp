#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int res=mod;
	for (int i=1;i<=n/m;i++){
		int b=n-i*m;
		int a=n-2*b;
		if (a>=0 && b>=0)res=min(res, a+b);
	}
	cout << res;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, d;
	cin >> n >> d;
	long long a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	long long res=0;
	for (int i=2;i<=n;i++)
	    if (a[i]<=a[i-1]){
	    	long long hieu=a[i-1]-a[i];
	    	int thuong=hieu/d+1;
	    	res+=thuong;
	    	a[i]+=(long long)thuong*d;
		}
	cout << res;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	int dmin[n+5];
	int dmax[n+5];
	dmin[1]=a[1];
	for (int i=2;i<=n;i++)
	    dmin[i]=min(a[i], dmin[i-1]);
	dmax[n]=a[n];
	for (int i=n-1;i>=1;i--)
	    dmax[i]=max(a[i], dmax[i+1]);
	int res=-mod;
	for (int i=1;i<=n-1;i++)
	    res=max(res, dmax[i+1]-dmin[i]);
	cout << res;
} 
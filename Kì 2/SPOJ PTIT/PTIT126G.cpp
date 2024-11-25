#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int a[n+5], d[m+5];
	d[0]=0;
	int res=-1;
	for (int i=1;i<=n;i++) cin >> a[i];
	for (int i=1;i<=m+3;i++) d[i]=mod;
	for (int i=0;i<=m;i++)
	    for (int j=1;j<=n;j++)
	        if (i-a[j]>=0 && d[i]>d[i-a[j]]+1)
	            d[i]=d[i-a[j]]+1;
	if (d[m]!=mod) res=d[m];
	cout << res;        
} 
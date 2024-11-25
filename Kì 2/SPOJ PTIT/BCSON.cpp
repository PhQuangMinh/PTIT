#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int a[1005][1005];
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	long long res=0;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
	        cin >> a[i][j];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++){
	        if (a[i][j]>a[i][j-1]) res+=abs(a[i][j]-a[i][j-1]);
			if (a[i][j]>a[i-1][j]) res+=abs(a[i][j]-a[i-1][j]);
			if (a[i][j]>a[i][j+1]) res+=abs(a[i][j]-a[i][j+1]);
			if (a[i][j]>a[i+1][j]) res+=abs(a[i][j]-a[i+1][j]);
		}
//	res/=2;
	res+=m*n;
	cout << res;
} 
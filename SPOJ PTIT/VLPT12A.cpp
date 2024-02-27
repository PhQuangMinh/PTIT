#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n, m;
	cin >> n >> m;
	int a[n+5][m+5];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
	        cin >> a[i][j];
	int mi=mod;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++){
	            int sum=0;
	            for (int i1=1;i1<=n;i1++)
	                for (int j1=1;j1<=m;j1++)
	                    if (i1!=i || j1!=j)
	                        sum=sum+(abs(i-i1)+abs(j-j1))*a[i1][j1];
	            mi=min(sum, mi);
			}
	cout << mi << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
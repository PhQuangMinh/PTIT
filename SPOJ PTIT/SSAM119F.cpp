#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
    int n, m;
    cin >> n >> m;
    int a[n+5][m+5], f[n+5][m+5];
    for (int i=0;i<=n+1;i++)
        for (int j=0;j<=m+1;j++){
           if (i==0 || i==n+1 || j==0 || j==m+1) f[i][j]=mod; 
		   else cin >> a[i][j];
       }
    f[0][0]=0;
    for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++){
	    	int t=f[i-1][j-1]+a[i][j];
	    	int t1=f[i][j-1]+a[i][j];
	    	int t2=f[i-1][j]+a[i][j];
	    	f[i][j]=min(t1, t2);
	    	f[i][j]=min(f[i][j], t);
		}
	cout << f[n][m] << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
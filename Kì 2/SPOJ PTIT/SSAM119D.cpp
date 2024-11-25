#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
	int n=s.size();
	int ma=1;
	int a[n+1][n+1];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
	        if (i==j) a[i][j]=1;
	        else a[i][j]=0;
	for (int i=2;i<=n;i++)
	    for (int dau=0;dau<n-i+1;dau++){
	    	int cuoi=i+dau-1;
		    if (i==2 && s[dau]==s[cuoi]) a[dau][cuoi]=1;
		    else{
		    	if (a[dau+1][cuoi-1]==1 && s[cuoi]==s[dau])
		    	    a[dau][cuoi]=1;
		    	else a[dau][cuoi]=0;
			}
			if (a[dau][cuoi]) ma=max(ma, i);
		}
	cout << ma << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
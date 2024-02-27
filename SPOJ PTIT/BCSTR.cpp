#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int a[1005][1005];
int main(){
	faster();
	string s, t;
	cin >> s >> t;
	int ns=s.size();
	int nt=t.size();
	int ans=0;
	a[0][0]=0;
	for (int i=0;i<ns;i++)
	    for (int j=0;j<nt;j++){
	    	if (s[i]==t[j]) a[i+1][j+1]=a[i][j]+1;
			else 
			    a[i+1][j+1]=max(a[i][j+1], a[i+1][j]); 
			ans=max(ans, a[i+1][j+1]);
		}
	cout << ans;
} 
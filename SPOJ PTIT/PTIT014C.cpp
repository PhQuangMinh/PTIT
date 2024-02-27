#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int same(string s, string t){
	int a[35][35]={0};
	int lens=s.size();
	int lent=t.size();
	int ans=0;
	a[0][0]=0;
	for (int i=0;i<lens;i++)
	    for (int j=0;j<lent;j++){
	    	if (s[i]==t[j]) a[i+1][j+1]=a[i][j]+1;
			else 
			    a[i+1][j+1]=max(a[i][j+1], a[i+1][j]); 
			ans=max(ans, a[i+1][j+1]);
		}
//	for (int i=0;i<lens;i++){
//		for (int j=0;j<lent;j++) cout << a[i][j] << " ";
//		cout << "\n";
//	}
	return ans;
}
void solve(){
	int n;
	cin >> n;
	string s[n+5];
	for (int i=1;i<=n;i++) cin >> s[i];
	int ans=0;
	for (int i=1;i<n;i++)
	    for (int j=i+1;j<=n;j++)
	        ans=max(ans, same(s[i], s[j]));
	cout << ans << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
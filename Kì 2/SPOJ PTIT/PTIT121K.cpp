#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int a[n+5][n+5];
	string s[105][105]={""};
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++)
	        cin >> a[i][j];
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++){
	        s[i][j]=max(s[i-1][j], s[i][j-1]);
	        char t=a[i][j]+'0';
	        s[i][j]+=t;
	    }
	string res=s[n][n];
	if (res==""){
		cout << 0;
		return 0;
	}
//	cout << res;
	n=res.size();
	int t=n%4;
	for (int i=1;i<=4-t;i++) res='0'+res;
    n=res.size();
	int d=0;
	int sum=0;
	string ans="";
	for (int i=0;i<n;i++){
		sum+=(res[i]-'0')*pow(2, 3-d);
		d++;
		if (d==4){
			if (sum<10) ans+=(sum+'0');
			else{
				sum-=10;
				ans+=(char)(sum+65);
			}
			d=0;
			sum=0;
		}
//		cout << sum << "a\n";
	}
	while (ans[0]=='0' && ans.size()>1) ans.erase(ans.begin());
	cout << ans;
}
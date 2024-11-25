#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	string s[n+5];
	for (int i=0;i<n;i++) cin >> s[i];
	int a[n+5][m+5];
	for (int i=0;i<n;i++)
	    for (int j=0;j<m;j++)
            a[i][j]=0;
	for (int i=0;i<n;i++){
		int ok=1;
	    for (int j=0;j<m;j++){
	    	if (s[i][j]=='S') ok=0;
		}
		if (ok){
			for (int j=0;j<m;j++) a[i][j]=1;
		}
	}
	for (int i=0;i<m;i++){
		int ok=1;
		for (int j=0;j<n;j++)
		    if (s[j][i]=='S') ok=0;
		if (ok){
//			cout << i << "\n";
			for (int j=0;j<n;j++) a[j][i]=1;
		}
	}
//	for (int i=0;i<n;i++){
//		for (int j=0;j<m;j++) cout << a[i][j];
//		cout << "\n";
//	}
	int ans=0;
	for (int i=0;i<n;i++)
	    for (int j=0;j<m;j++)
	        if (a[i][j]) ans++;
	cout << ans;
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	string s[n+5];
	for (int i=1;i<=n;i++){
	    cin >> s[i];
	    s[i]='.'+s[i]+'.';
	}
	s[0]="";
	s[n+1]="";
	for (int i=0;i<=m+1;i++){
		s[0]+='.';
		s[n+1]+='.';
	}
	int imax, jmax;
	int ma=0;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
		    if (s[i][j]=='.'){
	            int d=0;
	            if (s[i-1][j-1]=='o') d++;
	            if (s[i-1][j]=='o') d++;
	            if (s[i-1][j+1]=='o') d++;
	            if (s[i][j-1]=='o') d++;
	            if (s[i][j+1]=='o') d++;
	            if (s[i+1][j-1]=='o') d++;
	            if (s[i+1][j]=='o') d++;
	            if (s[i+1][j+1]=='o') d++;
	            if (d>ma){
	        	    ma=d;
	        	    imax=i;
	        	    jmax=j;
			    }
		    }
	if (ma!=0) s[imax][jmax]='o';
	int ans=0;
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=m;j++)
		    if (s[i][j]=='o'){
	    	    if (s[i-1][j-1]=='o') ans++;
	    	    if (s[i-1][j]=='o') ans++;
	            if (s[i-1][j+1]=='o') ans++;
	            if (s[i][j-1]=='o') ans++;
	            if (s[i][j+1]=='o') ans++;
	            if (s[i+1][j-1]=='o') ans++;
	            if (s[i+1][j]=='o') ans++;
	            if (s[i+1][j+1]=='o') ans++;
		    }
	ans/=2;
	cout << ans;
}
 
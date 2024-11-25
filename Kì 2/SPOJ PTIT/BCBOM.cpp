#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
char s[105][105];
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	while (n!=0 && m!=0){
		char s[105][105];
		for (int i=0;i<=n+1;i++)
		    for (int j=0;j<=m+1;j++){
		    	if (i==0 || i==n+1 || j==0 || j==m+1)
		    	    s[i][j]='.';
		    	else cin >> s[i][j];
			}
//		for (int i=0;i<=n+1;i++){
//			for (int j=0;j<=m+1;j++)
//			    cout << s[i][j];
//			cout << "\n";
//		}
	    for (int i=1;i<=n;i++)
	        for (int j=1;j<=m;j++)
			    if (s[i][j]!='*'){
	    	    int dem=0;
	    	    if (s[i-1][j-1]=='*') dem++;
	    	    if (s[i-1][j+1]=='*') dem++;
	    	    if (s[i-1][j]=='*') dem++;
	    	    if (s[i][j+1]=='*') dem++;
	    	    if (s[i][j-1]=='*') dem++;
	    	    if (s[i+1][j-1]=='*') dem++;
	    	    if (s[i+1][j]=='*') dem++;
	    	    if (s[i+1][j+1]=='*') dem++;
	    	    s[i][j]=(dem+'0');
		    }
		for (int i=1;i<=n;i++){
	        for (int j=1;j<=m;j++)
	            cout << s[i][j];
	        cout << "\n";
	    }
		cin >> n >> m; 
	}
}
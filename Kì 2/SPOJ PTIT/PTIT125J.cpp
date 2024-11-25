#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    string s[n+5];
    for (int i=1;i<=n;i++) cin >> s[i];
    for (int i=1;i<=n;i++)
        for (int j=0;j<n;j++){
		    if (s[i][j]!='.'){
        	    int ok=0;
                if (j<=n-3 && s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2]) ok=1;
                if (i<=n-2 && s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j]) ok=1;
                if (i<=n-2 && j<=n-3 && s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2]) ok=1;
                if (i<=n-2 && j>=2 && s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2]) ok=1;
				if (ok==1){
            	    cout << s[i][j];
            	    return 0;
			    }
		    }
		}
    cout << "ongoing";
}
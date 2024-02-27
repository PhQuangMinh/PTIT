#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s[10];
	for (int i=1;i<=4;i++){
	    cin >> s[i];
	    s[i]="a"+s[i]+"a";
	}
	s[0]="";
	s[5]="";
	for (int i=0;i<=5;i++){
		s[0]+="a";
		s[5]+="a";
	}
	int ok=0;
	for (int i=1;i<=4;i++){
		for (int j=1;j<=4;j++){
			if (s[i][j]==s[i][j+1] && s[i][j]==s[i+1][j] && s[i][j]==s[i+1][j+1]) ok=1;
			if (s[i][j]==s[i][j+1] && s[i][j]==s[i+1][j] && s[i][j]!=s[i+1][j+1]) ok=1;
			if (s[i][j]==s[i][j+1] && s[i][j]!=s[i+1][j] && s[i][j]==s[i+1][j+1]) ok=1;
			if (s[i][j]!=s[i][j+1] && s[i][j]==s[i+1][j] && s[i][j]==s[i+1][j+1]) ok=1;
		}
	}
	if (ok) cout << "YES";
	else cout << "NO";
}
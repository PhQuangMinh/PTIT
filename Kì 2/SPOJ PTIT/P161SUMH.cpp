#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s[n+5];
	s[0]="";
	s[n+1]="";
	for (int i=0;i<=n+1;i++)
	    if (i==0 || i==n+1){
	    	for (int j=0;j<=n+1;j++) s[i]+='x';
		}
		else{
			cin >> s[i];
			s[i]='x'+s[i]+'x';
		}
	int res;
//	for (int i=0;i<=n+1;i++){
//		for (int j=0;j<=n+1;j++) cout << s[i][j];
//		cout << "\n";
//	}
	for (int i=1;i<=n;i++)
	    for (int j=1;j<=n;j++){
	    	res=0;
	    	if (s[i-1][j]=='o') res++;
	    	if (s[i+1][j]=='o') res++;
	    	if (s[i][j-1]=='o') res++;
	    	if (s[i][j+1]=='o') res++;
	    	if (res%2==1){
	    		cout << "NO";
	    		return 0;
			}
		}
	cout << "YES";
} 
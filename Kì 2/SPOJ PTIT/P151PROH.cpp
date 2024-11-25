#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    string s;
    cin >> s;
    for (int i=0;i<s.size();i++){
    	if (s[0]=='4' || s[i]!='1' && s[i]!='4' || i>=2 && s[i]=='4' && s[i-1]=='4' && s[i-2]=='4'){
    		 cout << "NO";
    		 return 0;
		}
	}
	cout << "YES";
}
 



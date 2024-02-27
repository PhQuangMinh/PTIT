#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int so(char t){
	if (t>=97 && t<=99) return 2;
	if (t>=100 && t<=102) return 3;
	if (t>=103 && t<=105) return 4;
	if (t>=106 && t<=108) return 5;
	if (t>=109 && t<=111) return 6;
	if (t>=112 && t<=115) return 7;
	if (t>=116 && t<=118) return 8;
	if (t>=119 && t<=122) return 9;
}
int main(){
	faster();
	string s;
	cin >> s;
	int res=0;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i=0;i<s.size();i++) 
	   res+=so(s[i])+1;
	cout << res;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string s;
	cin >> s;
	while (s!="0"){
		long long so=0;
		for (int i=0;i<s.size();i++){
			int k=s[i]-'0';
			if (k>4) k--;
			so=so*9+k;
		}
		cout << s << ": " << so << "\n";
		cin >> s; 
	}
}
 
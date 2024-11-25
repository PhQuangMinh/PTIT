#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
	int n=s.size();
	int t=0;
	t=t*10+(s[0]-'0');
	t=t*10+(s[1]-'0');
	if (s[n-2]=='P'){
		if (t==12) cout << 12;
		else cout << t+12;
		for (int i=2;i<=n-3;i++) cout << s[i];
	}
	else{
		if (t==12){
			cout << "00";
			for (int i=2;i<=n-3;i++) cout << s[i];
		}
		else
		    for (int i=0;i<=n-3;i++) cout << s[i];
	}
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n<3){
		cout << 0;
		return 0;
	}
	int res=0;
	for (int i=0;i<n-2;i++){
		if (s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
			res++;
			if (i<n-3)
			    if (s[i+3]=='0') s[i+2]='1';
			    else s[i+2]='0';
			i+=2;
		}
	}
	cout << res;
} 
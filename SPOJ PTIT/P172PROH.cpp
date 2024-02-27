#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
	int n=s.size();
	int i=0;
	int res=0;
	s[n]='.';
	while (i<n){
		if (s[i]=='c'){
			if (s[i+1]=='-' || s[i+1]=='=') i++;
			res++;
		}
		else if (s[i]=='d'){
			if (s[i+1]=='-') i++;
			if (s[i+1]=='z' && s[i+2]=='=') i+=2;
			res++;
		}
		else if (s[i]=='l' && s[i+1]=='j' || s[i]=='n' && s[i+1]=='j'){
			i++;
			res++;
		}
		else if (s[i]=='s' && s[i+1]=='=' || s[i]=='z' && s[i+1]=='='){
			i++;
			res++;
		}
		else res++;
		i++;
	}
	cout << res;
}
 
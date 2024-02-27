#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
	int n=s.size();
	long long res=0;
	for (int i=0;i<n;i++){
		int t=s[i]-'0';
		if (t%4==0) res++;
		if (i<=n-2){
			t=t*10+(s[i+1]-'0');
			if (t%4==0) res+=i+1;
		}
	}
	cout << res;
} 
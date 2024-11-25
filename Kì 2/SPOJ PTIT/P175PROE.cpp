#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
	if (s.size()==1){
		cout << "0";
		return 0;
	}
	int sum=0;
	for (int i=0;i<s.size();i++)
	    sum+=(s[i]-'0');
	int res=1;
	while (sum>=10){
		int t=0;
		res++;
		while (sum!=0){
			t+=sum%10;
			sum/=10;
		}
		sum=t;
	}
	cout << res;
}
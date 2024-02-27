#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s="";
	for (int i=1;i<=1000;i++){
		int k=i;
		stringstream ss;
		ss << k;
		s+=ss.str();
	}
	cout << s[n-1];
}
 
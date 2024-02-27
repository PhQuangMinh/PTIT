#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	int dem=0;
	for (int i=0;i<n;i++){
		int k=abs((s[i]-'0')-(t[i]-'0'));
		if (10-k>k) dem+=k;
		else dem+=10-k;
	}
	cout << dem;
}
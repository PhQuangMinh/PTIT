#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	string s[n+5];
	int dem=1;
	cin >> s[1];
	for (int i=2;i<=n;i++){
		cin >> s[i];
		if (s[i][0]==s[i-1][1]) dem++;
	}
	cout << dem;
}
 
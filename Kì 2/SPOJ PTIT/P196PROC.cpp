#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s1, s2;
	cin >> s1 >> s2;
	int res=0;
	for (int i=0;i<n;i++){
		if (s1[i]=='K' && s2[i]=='K') cout << "B";
		if (s1[i]=='B' && s2[i]=='B') cout << "G";
		if (s1[i]=='G' && s2[i]=='G') cout << "K";
		if (s1[i]=='K' && s2[i]=='B') cout << "B";
		if (s1[i]=='K' && s2[i]=='G') cout << "K";
		if (s1[i]=='B' && s2[i]=='K') cout << "B";
		if (s1[i]=='B' && s2[i]=='G') cout << "G";
		if (s1[i]=='G' && s2[i]=='K') cout << "K";
		if (s1[i]=='G' && s2[i]=='B') cout << "G";
	}
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	map<string, int> a;
	string d1, d2;
	cin >> d1;
	a[d1]++;
	for (int i=1;i<n;i++){
		string s;
		cin >> s;
		a[s]++;
		if (s!=d1) d2=s;
	}
	if (a[d1]>a[d2]) cout << d1;
	else cout << d2;
//	cout << a[d1] << " " << a[d2];
} 
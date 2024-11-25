#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;cin.ignore();
	for (int i=1;i<=n;i++){
		string s;
		getline(cin, s);
		if (s=="lon hon") cout << 1;
		else if (s=="nho hon") cout << 3;
		else cout << 2;
		if (i!=n) cout << "\n";
	}
}
 
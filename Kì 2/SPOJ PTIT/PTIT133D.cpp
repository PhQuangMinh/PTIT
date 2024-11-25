#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string s;
	cin >> s;
	while (s=="[CASE]"){
		int n;
		cin >> n;
		if (n%5==0 || n%5==2) cout << "Hanako";
		else cout << "Taro";
		cin >> s;
		if (s!="[END]") cout << "\n";
	}
} 
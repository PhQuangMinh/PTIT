#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	while (n!=0){
		if (n>1000000 && n<=5000000) n*=0.9;
		if (n>5000000) n*=0.8;
		cout << n << "\n";
		cin >> n;
	}
} 
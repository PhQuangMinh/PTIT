#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	if (n==0){
		cout << 1;
		return 0;
	}
	n=n%4;
	if (n==1) cout << 8;
	if (n==2) cout << 4;
	if (n==3) cout << 2;
	if (n==0) cout << 6;
} 
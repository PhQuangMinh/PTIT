#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n;
	cin >> n;
	if (n%7==0){
		cout << (n/7)*2 << " " << n/7*2;
		return 0;
	}
	if (n%7==1) cout << n/7*2 << " " << n/7*2+1;
	else
	    if (n%7==6) cout << n/7*2+1 << " " << n/7*2+2;
		else cout << n/7*2 << " " << n/7*2+2;
} 
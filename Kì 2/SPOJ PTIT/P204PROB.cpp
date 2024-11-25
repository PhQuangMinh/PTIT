#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n;
	cin >> n;
	if (n%2==0) cout << n/2;
	else cout << (n-1)/2-n;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int a, b, n;
	cin >> n >> a >> b;
	if (a+b>=n) cout << n-a;
	else cout << b+1;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int a, b, c;
	cin >> a >> b >> c;
	if (a==b+c) cout << a << "=" << b << "+" << c;
	else
	if (a==b*c) cout << a << "=" << b << "*" << c;
	else
	if (a==b-c) cout << a << "=" << b << "-" << c;
	else 
	if (a==b/c) cout << a << "=" << b << "/" << c;
	else
	if (a+b==c) cout << a << "+" << b << "=" << c;
	else if (a-b==c) cout << a << "-" << b << "=" << c;
	else if (a/b==c) cout << a << "/" << b << "=" << c;
	else if (a*b==c) cout << a << "*" << b << "=" << c;
} 
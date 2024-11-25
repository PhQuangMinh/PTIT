#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	string n;
	cin >> n;
	int a[20];
	a[0]=2;
	a[1]=7;
	a[2]=2;
	a[3]=3;
	a[4]=3;
	a[5]=4;
	a[6]=2;
	a[7]=5;
	a[8]=1;
	a[9]=2;
	cout << a[n[0]-'0']*a[n[1]-'0'];
} 
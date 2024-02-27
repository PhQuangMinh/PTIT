#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int tien(int n){
	int dem=0;
	dem+=n/500;
	n%=500;
		dem+=n/200;
	n%=200;
	dem+=n/100;
	n%=100;
	dem+=n/50;
	n%=50;
	dem+=n/20;
	n%=20;
	dem+=n/10;
	n%=10;
	dem+=n/5;
	n%=5;
	dem+=n/2;
	n%=2;
	dem+=n;
	return dem;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		cout << tien(x) << "\n";
	}
}
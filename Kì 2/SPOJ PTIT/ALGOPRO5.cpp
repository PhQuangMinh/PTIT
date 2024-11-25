#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	long long kq=0;
	long long d=1;
	for (int i=1;i<=n;i++){
		d*=2;
		kq+=d;
	}
	cout << kq;
}
 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int d1, d2, d3;
	cin >> d1 >> d2 >> d3;
	if (d1>d2) swap(d1, d2);
	int kq=(d1+d2)*2;
	if (d1+d2+d3<kq) kq=d1+d2+d3;
	if ((d1+d3)*2<kq) kq=(d1+d3)*2;
	cout << kq;
}
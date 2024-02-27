#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int kq=min(n, m);
	cout << kq;
	n-=kq;
	m-=kq;
	kq=0;
	if (n>1) kq+=n/2;
	if (m>1) kq+=m/2;
	cout << " " << kq;
}
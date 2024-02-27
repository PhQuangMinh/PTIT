#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int m, n, k;
	cin >> m >> n >> k;
	if (m<2 || n<1){
		cout << 0;
		return 0;
	}
	int kq=0;
	while (kq*2<=m && kq<=n && k-(m-kq*2)-(n-kq)<=0){
		kq++;
	}
	kq--;
	cout << kq;
}
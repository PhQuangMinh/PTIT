#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string s, kq;
	cin >> s;
	int d=0;
	int n=s.size();
	for (int i=n-1;i>=0;i--){
		d++;
		kq=s[i]+kq;
		if (d==3 && i!=0){
			kq=',' +kq;
			d=0;
		}
	}
	cout << kq;
} 
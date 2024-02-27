#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	int dem=0;
	int t;
	cin >> t;
	for (int i=1;i<n;i++){
		int x;
		cin >> x;
		if (x!=t) dem++;
		t=x;
	}
	cout << dem;
}
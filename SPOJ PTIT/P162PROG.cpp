#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	int dem=0;
	cin >> n;
	while (n!=0){
		if (n%2==1) dem++;
		n/=2;
	}
	cout << dem;
}
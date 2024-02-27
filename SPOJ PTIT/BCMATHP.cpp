#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int csd(long long n){
	while (n>=10){
		n/=10;
	}
	return n;
}
int main(){
	faster();
	int a, b;
	cin >> a >> b;
	long long lt=1;
	for (int i=1;i<=62;i++){
		lt*=2;
		if (i>a && csd(lt)==b){
			cout << i;
			return 0;
		}
	}
	cout << 0;
}
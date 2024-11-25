#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int d[10]={0};
	if (n==0){
		cout << 10;
		return 0;
	}
	if (n<10){
		cout << n;
		return 0;
	}
	for (int i=9;i>=2;i--){
		while (n%i==0){
			d[i]++;
			n/=i;
		}
	}
	if (n!=1) cout << "-1";
	else{
		for (int i=2;i<=9;i++)
		    for (int j=1;j<=d[i];j++) cout << i;
	}
} 
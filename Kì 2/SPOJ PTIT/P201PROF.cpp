#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n;
	int k;
	cin >> n >> k;
	long long t=n;
	int dem2=0;
	int dem5=0;
	while (t%2==0){
		dem2++;
		t/=2;
	}
	while (t%5==0){
		dem5++;
		t/=5;
	}
	long long tich=1;
	for (int i=1;i<=k-dem2;i++) tich*=2;
	for (int i=1;i<=k-dem5;i++) tich*=5;
	cout << n*tich;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
long long a[500000];
long long np(int n){
	long long res=0;
	long long d=1;
	while (n!=0){
		int du=n%2;
		if (du==1) du=9;
		res+=du*d;
		d*=10;
		n/=2;
	}
	return res;
}
bool cmp(long long a, long long b){
	if (a<b) return 1;
	return 0;
}
int main(){
	faster();
	int n=pow(2, 18)-1;
	int dem=0;
	for (int i=0;i<=n;i++){
		a[++dem]=np(i);
	}
	sort(a+1, a+dem+1, cmp);
//	for (int i=1;i<=100;i++) cout << a[i] << " ";
	int test;
	cin >> test;
	for (int i=1;i<=test;i++){
		int x;
		cin >> x;
		for (int j=2;j<=dem;j++)
		    if (a[j]%x==0){
		    	cout << a[j] << "\n";
		    	break;
			}
	}
} 
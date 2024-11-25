#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int check[10];
int checkcs(long long n){
	while (n!=0){
		check[n%10]++;
		n/=10;
	}
	for (int i=0;i<=9;i++) 
	    if (check[i]==0) return 0;
	return 1;
}
void solve(long long n){
	int dem=0;
	long long k=n;
	while (checkcs(k)==0){
		dem++;
		k=n*dem;
	}
	for (int i=0;i<=9;i++) check[i]=0;
	cout << dem << "\n";
}
int main(){
	faster();
	long long n;
	while (cin >> n){
	    solve(n);
	}
} 
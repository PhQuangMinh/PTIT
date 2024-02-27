#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dem(long long n){
	int d=0;
	while(n!=0){
		int t=n%10;
		if (t==4 || t==7) d++;
		n/=10;
	}
	return d;
}
int check(long long n){
	if (dem(n)==4 || dem(n)==7) return 1;
	return 0;
}
int main(){
	faster();
	long long n;
	cin >> n;
	if (check(n)) cout << "YES";
	else cout << "NO";
} 

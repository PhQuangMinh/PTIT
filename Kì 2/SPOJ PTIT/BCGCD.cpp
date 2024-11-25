#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
long long ucln(long long a, long long b){
	long long t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	faster();
	long long n, m;
	cin >> n >> m;
	while (n!=0 && m!=0){
		long long tich=n*m;
		long long uc=ucln(n, m);
		long long bc=tich/uc;
		cout << uc << " " << bc << "\n";
		cin >> n >> m;
 	}
}
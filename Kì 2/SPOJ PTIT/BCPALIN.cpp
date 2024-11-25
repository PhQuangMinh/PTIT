#include<bits/stdc++.h>
using namespace std;
int check(long long n){
	long long k=n, t=0;
	while (k!=0){
		t=t*10+k%10;
		k/=10;
	}
	if (t==n) return 1;
	return 0;
}
int main(){
	int t;
	cin >> t;
	for (int i=1;i<=t;i++){
		long long n;
		cin >> n;
		if (check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
} 
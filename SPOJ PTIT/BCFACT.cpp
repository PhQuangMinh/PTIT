#include<bits/stdc++.h>
using namespace std;
long long gt(long long n){
	if (n==1) return 1;
	return n*gt(n-1);
}
int main(){
	long long n;
	cin >> n;
	while (n!=0){
	    cout << gt(n) << endl;
	    cin >> n;
	}
} 
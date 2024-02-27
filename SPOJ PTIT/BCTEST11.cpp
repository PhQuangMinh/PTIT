#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int ktr(int n){
	while (n!=0){
		if (n%10!=4 && n%10!=7) return 0;
		n/=10;
	}
	return 1;
}
int check(int n){
	for (int i=1;i<=n;i++)
	    if (ktr(i) && n%i==0) return 1;
	return 0;
}
int main(){
	faster();
	int n;
	cin >> n;
	if (check(n)) cout << "YES";
	else cout << "NO";
} 
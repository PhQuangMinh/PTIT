#include<bits/stdc++.h>
using namespace std;
int snt(int a){
	if (a<2) return 0;
	for (int i=2;i<=sqrt(a);i++)
	    if (a%i==0) return 0;
	return 1;
}
int main(){
	int a;
	cin >> a;
	if (snt(a)) cout << "YES";
	else cout << "NO";
} 
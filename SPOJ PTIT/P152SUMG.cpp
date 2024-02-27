#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int snt(int n){
	for (int i=2;i<=sqrt(n);i++)
	    if (n%i==0) return 0;
	return 1;
}
int main(){
	faster();
	int a, b;
	cin >> a >> b;
	a++;
	while (snt(a)==0) a++;
	if (a==b) cout << "YES";
	else cout << "NO";
}
 
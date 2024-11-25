#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int dn(int x){
	int t=0;
	while (x!=0){
		t=t*10+x%10;
		x/=10;
	}
	return t;
}
int main(){
	faster();
	int a, b;
	cin >> a >> b;
	if (dn(a)>dn(b)) cout << dn(a);
	else cout << dn(b);
} 
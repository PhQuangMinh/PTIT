#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int check(int a, int b, int c){
	if (a+b<=c || a+c<=b || b+c<=a) return 0;
	if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a) return 1;
	return 0;
}
int main(){
	faster();
	int a, b, c;
	cin >> a >> b >> c;
	while (a!=0 || b!=0 || c!=0){
		if (check(a, b, c)) cout << "right\n";
		else cout << "wrong\n";
		cin >> a >> b >> c;
	}
} 
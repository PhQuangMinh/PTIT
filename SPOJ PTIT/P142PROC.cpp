#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int xa, xb, ya, yb;
	cin >> xa >> ya >> xb >> yb;
	if (xa==xb || ya==yb) cout << "1 ";
	else cout << "2 ";
	if ((xa+ya)%2!=(xb+yb)%2) cout << "0 ";
	else{
		if (xa-ya==xb-yb || xa+ya==xb+yb) cout << "1 ";
		else cout << "2 ";
	}
	if (abs(xa-xb)>abs(ya-yb)) cout << abs(xa-xb);
	else cout << abs(ya-yb);
}
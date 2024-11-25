#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct luu{
	int ti, teo;
};
int main(){
	faster();
	int x, y, a , b;
	cin >> x >> y >> a >> b;
	int d=0;
	luu l[100000];
	for (int i=a;i<=x;i++)
	    for (int j=b;j<=min(i-1,y);j++){
	    	l[++d].ti=i;
	    	l[d].teo=j;
		}
	cout << d << "\n";
	for (int i=1;i<=d;i++)
	    cout << l[i].ti << " " << l[i].teo << "\n";
}
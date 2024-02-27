#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int x, y;
	cin >> x >> y;
	int ngay;
	if (x==2) ngay=28;
	else
	    if (x<=7){
		    if (x%2==0) ngay=30;
		    else ngay=31;
	    }
	    else{
	    	if (x%2==0) ngay=31;
	    	else ngay=30;
		}
	int res=0;
	if (y==1){
		res=ngay/7;
		if (ngay%7!=0) res=res+1;
		cout << res;
		return 0;
	}
	ngay=ngay-8+y;
	res=ngay/7;
	if (ngay%7!=0) res+=2;
	else res++;
	cout << res;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string smax;
	int max=0;
	int res=0;
	for (int i=1;i<=n;i++){
		string s;
		cin >> s;
		int x, y;
		cin >> x >> y;
		int d=0;
		while (y>=x){
			d++;
			y-=(x-2);
		}
		res+=d;
		if (d>max){
			max=d;
			smax=s;
		}
	}
	cout << res << "\n" << smax;
} 
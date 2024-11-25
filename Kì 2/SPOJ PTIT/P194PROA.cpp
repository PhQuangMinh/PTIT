#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	long long n;
	cin >> n;
	int res=0;
	for (int i=1;i<=n;i++){
		int a, b, c;
		cin >> a >> b >> c;
		if (a==1 && b==1 || a==1 && c==1 || b==1 && c==1) res++;
	}
	cout << res;
} 
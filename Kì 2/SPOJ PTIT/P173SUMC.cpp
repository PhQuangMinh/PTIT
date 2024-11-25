#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	int mi=max(n, m);
	int res=0;
	for (int i=0;i<=mi;i++){
		int a=i*i;
		int b=n-a;
		int b1=m-i;
		if (b1>=0 && b>=0){
			int t=sqrt(b1);
			if (t*t==b1 && t==b) res++;
		}
	}
	cout << res;
} 
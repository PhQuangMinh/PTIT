#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int res=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		if (x==0) res++;
	}
	if (res==1) cout << "YES";
	else cout << "NO";
} 
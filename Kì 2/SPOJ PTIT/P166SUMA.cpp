#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int check[10000]={0};
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		check[x]=1;
	}
	int res=0;
	for (int i=1;i<=n;i++)
	    if (check[i]==0) res++;
	cout << res;
} 
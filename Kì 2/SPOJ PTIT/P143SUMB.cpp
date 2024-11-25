#include<bits/stdc++.h>
#include<queue>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m;
	cin >> n >> m;
	priority_queue<int, vector<int>> hd; 
	int a[2000];
	for (int i=1;i<=m;i++){
		cin >> a[i];
		hd.push(a[i]);
	}
	int res=0;
	int k=n;
	while (n!=0){
		int x=hd.top();
		hd.pop();
		res+=x;
		x--;
		if (x>0) hd.push(x);
		n--;
	}
	cout << res << " ";
	res=0;
	n=k;
	priority_queue<int, vector<int>, greater<int>> ma;
	for (int i=1;i<=m;i++){
		ma.push(a[i]);
	}
	while (n!=0){
		int x=ma.top();
		ma.pop();
		res+=x;
		x--;
		if (x>0) ma.push(x);
		n--;
//		cout << x << " ";
	}
	cout << res;
} 
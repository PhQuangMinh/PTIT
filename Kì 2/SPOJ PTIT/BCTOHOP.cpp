#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[20];
void in(int n){
	for (int i=1;i<=n;i++){
		cout << a[i];
		if (i!=n) cout << " ";
	}
	cout << "\n";
}
void ql(int x, int n, int k){
	for (int i=a[x-1]+1;i<=n-(k-x);i++){
		a[x]=i;
		if (x==k) in(x);
		else ql(x+1, n, k);
	}
}
int main(){
	faster();
	int n, k;
	cin >> n >> k;
	a[0]=0;
	ql(1, n, k);
}
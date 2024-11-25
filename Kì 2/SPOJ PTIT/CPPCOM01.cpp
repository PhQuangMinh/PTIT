#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[30];
void in(int n){
	for (int i=1;i<=n;i++){
		cout << a[i];
	}
	cout << " ";
}
void ql(int x, int n){
	for (int i=0;i<=1;i++){
		a[x]=i;
		if (x==n) in(x);
		else ql(x+1, n);
	}
}
void solve(){
	int n;
	cin >> n;
	a[0]=0;
	ql(1, n);
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
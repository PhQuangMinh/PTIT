#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int a[30];
int check[30];
void in(int n){
	for (int i=1;i<=n;i++){
		cout << a[i];
	}
	cout << " ";
}
void ql(int x, int n){
	for (int i=1;i<=n;i++){
		if (check[i]==0){
		    a[x]=i;
		    check[i]=1;
		    if (x==n) in(x);
		    else ql(x+1, n);
		    check[i]=0;
	    }
	}
}
void solve(){
	int n;
	cin >> n;
	ql(1, n);
	for (int i=1;i<=n;i++) check[i]=0;
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
#include<bits/stdc++.h>
using namespace std;
int a[100];
int ok=1;
int ans;
void sinh(){
	int i=ans;
	while (i>=1 && a[i]==1) i--;
	if (i==0){
		ok=0;
		return;
	}
	a[i]--;
	int d=ans-i+1;
	ans=i;
	int p=d/a[i];
	int r=d%a[i];
	for (int j=1;j<=p;j++) a[++ans]=a[i];
	if (r) a[++ans]=r;
}
void solve(){
    ans=1;
	int n;
	cin >> n;
	a[1]=n;
	ok=1;
	while (1){
		cout << "(";
		for (int i=1;i<=ans;i++){
			cout << a[i];
			if (i!=ans) cout << " ";
			else cout << ") ";
    	}
		sinh();
		if (ok==0) return;
	}
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		solve();
		if (i!=n) cout << "\n";
	}
}
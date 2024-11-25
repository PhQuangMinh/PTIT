#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		for (int j=1;j<=(n-i)*2;j++) cout << " ";
		for (int j=0;j<=i;j++) cout << j << " ";
		if (i==0) cout << "\n";
		for (int j=i-1;j>=0;j--){
			cout << j;
			if (j!=0) cout << " ";
			else cout << "\n";
		}
	}
	for (int i=0;i<=n;i++) cout << i << " ";
	for (int i=n-1;i>=0;i--){
		cout << i;
		if (i!=0) cout << " ";
	}
	cout << "\n";
	for (int i=n-1;i>=0;i--){
		for (int j=1;j<=(n-i)*2;j++) cout << " ";
		for (int j=0;j<=i;j++) cout << j << " ";
		for (int j=i-1;j>=0;j--){
			cout << j;
			if (j!=0) cout << " ";
		}
		if (i!=0) cout << "\n";
	}
}
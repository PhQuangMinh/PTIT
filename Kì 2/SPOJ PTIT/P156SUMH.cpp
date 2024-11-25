#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	int d=1;
	for (int i=1;i<=n;i++){
		if (i<=n/2){
			for (int j=1;j<=n/2-i+1;j++) cout << "*";
			for (int j=1;j<=d;j++) cout << "D";
			for (int j=1;j<=n/2-i+1;j++) cout << "*";
			d+=2;
			cout << "\n";
		}
		else
		    if (i==n/2+1){
		    	for (int j=1;j<=n;j++) cout << "D";
		    	d-=2;
		    	cout << "\n";
			}
			else{
				for (int j=1;j<=i-n/2-1;j++) cout << "*";
				for (int j=1;j<=d;j++) cout << "D";
				for (int j=1;j<=i-n/2-1;j++) cout << "*";
				if (i!=n) cout << "\n";
				d-=2;
			}
	}
}
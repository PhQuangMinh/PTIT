#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n;
	cin >> n;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			int d=0;
			while (n%i==0){
				d++;
				n/=i;
			}
			cout << i << " " << d << " ";
		}
	}
	if (n>1) cout << n << " 1 ";
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
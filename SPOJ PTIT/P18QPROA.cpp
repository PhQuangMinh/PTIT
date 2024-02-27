#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n;
	cin >> n;
	if (n%2==1){
		cout << 0 << "\n";
		return;
	}
	int dem=0;
	n/=2;
	for (int i=1;i<=sqrt(n);i++)
	    if (n%i==0){
	    	if (i*i==n) dem++;
	    	else dem+=2;
		}
	cout << dem << "\n"; 
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
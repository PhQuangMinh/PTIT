#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int nen(int n){
	int sum=0;
	while (n!=0){
		sum+=n%10;
		n/=10;
	}
	n=sum;
	if (n>=10) n=nen(n);
	return n;
}
void solve(){
	int n;
	cin >> n;
	cout << nen(n) << "\n";
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
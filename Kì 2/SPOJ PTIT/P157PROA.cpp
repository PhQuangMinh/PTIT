#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int n;
	int d[1001]={0};
	cin >> n;
	int max=0;
	for (int i=1;i<=n;i++){
		int x;
		cin >> x;
		d[x]++;
		if (d[x]>max) max=d[x];
	}
	for (int i=1;i<=1000;i++)
	    if (d[i]==max){
	    	cout << i << "\n";
	    	return;
		}
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
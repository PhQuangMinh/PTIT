#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int a, m;
	cin >> a >> m;
	for (int i=1;i<=m-1;i++)
	    if (a*i%m==1){
	    	cout << i << "\n";
	    	return;
		}
	cout << -1 << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
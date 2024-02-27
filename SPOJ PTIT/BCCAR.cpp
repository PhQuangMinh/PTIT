#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
	int n;
	cin >> n;
	int a[n+5];
	for (int i=1;i<=n;i++) cin >> a[i];
	sort(a+1, a+n+1);
	cout << (a[n]-a[1]) * 2 << "\n";
}
int main(){
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 

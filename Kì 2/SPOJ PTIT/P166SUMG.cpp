#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int a, b, c;
	cin >> a >> b >> c;
	if (a==0 && b==0 || a==0 && c==0){
		cout << "NO";
		return;
	}
	int hieu=abs(b-c);
	if (hieu%3==0) cout << "YES";
	else cout << "NO";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
	    solve();
	    if (i!=n) cout << "\n";
	}
} 
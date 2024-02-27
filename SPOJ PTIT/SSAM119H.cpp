#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string n;
	cin >> n;
    if (n.size()==1){
    	if (n[0]=='4' || n[0]=='8' || n[0]=='0') cout << 4;
    	else cout << 0;
    	cout << "\n";
    	return;
	}
	int t=n[n.size()-2]-'0';
	t=t*10+(n[n.size()-1]-'0');
	if (t%4==0) cout << 4;
	else cout << 0;
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
	int vt=-1;
	int len=s.size();
	for (int i=len-1;i>=1;i--)
	    if (s[i]>s[i-1]){
	    	vt=i-1;
	    	break;
		}
    if (vt==-1){
    	cout << "BIGGEST";
    	return;
	}
	for (int i=len-1;i>vt;i--)
	    if (s[i]>s[vt]){
	    	swap(s[i], s[vt]);
	    	break;
		}		
	for (int i=0;i<=vt;i++) cout << s[i];
	for (int i=len-1;i>vt;i--) cout << s[i];
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
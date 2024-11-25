#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
    int len=s.size();
    int vitri=-1;;
    for (int i=len-2;i>=0;i--)
        if (s[i]<s[i+1]){
        	vitri=i;
        	break;
		}
	if (vitri==-1){
		cout << 0;
		return;
	}
	int t;
	for (int i=len;i>vitri;i--)
	    if (s[i]>s[vitri]){
	    	t=i;
	    	break;
		}
	swap(s[t], s[vitri]);
	for (int i=0;i<=vitri;i++) cout << s[i];
	for (int i=len-1;i>vitri;i--) cout << s[i];
}
int main(){
	faster();
	solve();
} 
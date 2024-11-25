#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
    string s, s1, t;
    cin >> s;
    int dem1=1, dem2=0;
    for (int i=1;i<n;i++){
    	cin >> t;
    	if (t==s) dem1++;
    	else{
    		dem2++;
    		s1=t;
		}
	}
	if (dem1>dem2) cout << s;
	else cout << s1;
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int luck(string s, int n){
	int sum=0;
	for (int i=0;i<n;i++){
	    if (s[i]!='4' && s[i]!='7') return 0;
	    if (i<n/2) sum+=(s[i]-'0');
	    else sum-=s[i]-'0';
	}
	if (sum==0) return 1;
	return 0;
}
int main(){
	faster();
    int n; 
    cin >> n;
    string s;
    cin >> s;
    if (luck(s, n)) cout << "YES";
    else cout << "NO";
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
    string s, t;
    cin >> s >> t;
    int res=0;
    for (int i=0;i<n;i++){
    	int t1=s[i]-'0';
    	int t2=t[i]-'0';
    	if (t1>t2) res+=min(t1-t2, t2+10-t1);
    	else res+=min(t2-t1, t1+10-t2);
	}
	cout << res;
}
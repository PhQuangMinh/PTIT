#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int doi(string s){
	for (int i=0;i<s.size();i++)
	    if (s[i]=='?') return -1;
	stringstream tach(s);
	int k;
	tach >> k;
	return k;
}
void solve(int a, int b, string c, int k){
	int t;
	if (k==1) t=a+b;
	else t=a-b;
	ostringstream str;
	str << t;
	string res=str.str();
	for (int i=0;i<c.size();i++)
		if (c[i]=='?'){
		    cout << res[i];
		    return;
		}
}
int main(){
	faster();
    string a, b, c;
    cin >> a >> b >> c;
    if (doi(a)==-1) solve(doi(c), doi(b), a, 0);
    else 
        if (doi(b)==-1) solve(doi(c), doi(a), b, 0);
        else solve(doi(a), doi(b), c, 1);
}
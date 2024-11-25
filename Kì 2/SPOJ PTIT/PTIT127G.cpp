#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string xoa(string s){
	while (s[0]=='0' && s.size()>1) s.erase(s.begin());
	return s;
}
bool cmp(string a, string b){
	if (a.size()<b.size() || a.size()==b.size() && a+b<b+a) return true;
	return false;
}
int main(){
	faster();
    int n; 
    cin >> n;
    string s[100000];
    int d=0;
    for (int i=1;i<=n;i++){
    	string xau;
    	cin >> xau;
    	string so="";
    	for (int i=0;i<xau.size();i++)
    	    if (xau[i]>='0' && xau[i]<='9') so+=xau[i];
    	    else
			    if (so!=""){
    	    	    s[++d]=xoa(so);
    	    	    so="";
			    }
		if (so!="") s[++d]=xoa(so);
	}
	sort(s+1, s+d+1, cmp);
	for (int i=1;i<=d;i++) cout << s[i] << "\n";
}
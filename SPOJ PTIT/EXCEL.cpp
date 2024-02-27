#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string laycot(int t){
	string s="";
	while (t!=0){
		t--;
		char k=(t%26)+'A';
		s=k+s;
		t/=26;
	}
	return s;
}
int main(){
	faster();
    string s;
    cin >> s;
    while (s!="R0C0"){
    	string hang="", cot="";
    	int t;
    	for (int i=1;i<s.size();i++)
    	    if (s[i]!='C') hang+=s[i];
    	    else{
    	    	for (int j=i+1;j<s.size();j++) cot+=s[j];
    	    	stringstream tach(cot);
    	    	tach >> t;
    	    	break;
			}
//		cout << t << " " << cot << " ";
		cout << laycot(t) << hang << "\n";
		cin >> s;
	}
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string s;
	getline(cin, s);
	while (s!="."){
		int dem=0;
		int ok=1;
		char check[10000];
		for (int i=0;i<s.size();i++){
		    if (s[i]=='(' || s[i]=='['){
		    	dem++;
		    	check[dem]=s[i];
			}
			else{
				if (s[i]==')' || s[i]==']'){
		    	    if (s[i]==']' && check[dem]=='(' || s[i]==')' && check[dem]=='[' || dem<=0){
		    	    	ok=0;
		    	    	break;
					}
					dem--;
			    }
			}
		}
		if (dem>0) ok=0;
		if (ok) cout << "yes\n";
		else cout << "no\n";
		getline(cin, s);
	}
}
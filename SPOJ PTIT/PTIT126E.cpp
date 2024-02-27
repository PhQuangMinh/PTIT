#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string s;
	cin >> s;
	while (s!="#"){
		int demy=0;
		int demn=0;
		int demp=0;
		int dema=0;
		for (int i=0;i<s.size();i++)
		    if (s[i]=='Y') demy++;
		    else 
		       if (s[i]=='N') demn++;
		       else
		           if (s[i]=='P') demp++;
		           else dema++;
	    if (dema>=demn+demp+demy) cout << "need quorum";
	    else
	        if (demy==demn) cout << "tie";
	        else 
	            if (demy>demn) cout << "yes";
	            else cout << "no";
	    cout << "\n";
	    cin >> s;
	}
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    string s;
    cin >> s;
    if (s[0]!='-') cout << s;
    else{
    	int n=s.size();
    	if (n==3){
    		if (s[n-1]!='0') cout << "-";
    		if (s[n-1]>s[n-2]) cout << s[n-2];
    		else cout << s[n-1];
    	}
    	else{
    	    int k;
    	    if (s[n-2]>s[n-1]) k=n-2;
    	    else k=n-1;
    	    s.erase(s.begin()+k);
    	    cout << s;
    	}
	}
}
 
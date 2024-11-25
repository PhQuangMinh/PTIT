#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    string s;
    cin >> s;
    string na="aoyeui";
    for (int i=0;i<s.size();i++){
    	s[i]=tolower(s[i]);
        int ok=1;
        for (int j=0;j<na.size();j++)
            if (na[j]==s[i]) ok=0;
        if (ok) cout << "." << s[i];
	}
} 
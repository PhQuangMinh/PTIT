#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	string s;
	cin >> s;
	int dt=0;
	int dh=0;
	for (int i=0;i<s.size();i++)
	    if (s[i]>='a' && s[i]<='z') dt++;
	    else dh++;
	if (dt<dh) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);
	cout << s;	
}
 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    string s;
    cin >> s;
    int count=0;
    for (int i=0;i<s.size()-1;i++)
        if (s[i]==')' && s[i+1]==')') count++;
    int dem=0;
    for (int i=0;i<s.size()-1;i++){
    	if (s[i]=='(' && s[i+1]=='(') 
    	    dem+=count;
    	if (s[i]==')' && s[i+1]==')') 
    	    count--;
	}
	cout << dem;
} 
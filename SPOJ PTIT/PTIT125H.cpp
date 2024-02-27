#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dem=0;
    for (int i=0;i<n;i++){
    	if (s[i]=='S') dem++;
    	if (s[i]=='L'){
    	    int d=1;
    		while (s[i]=='L'){
    			d++;
    			i++;
			}
			i--;
			dem+=d/2;
		}
	}
	cout << dem+1;
} 
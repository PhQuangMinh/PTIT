#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int n; 
    cin >> n;
    string s="";
    while (n%7!=0 && n>=0){
    	s+="4";
    	n-=4;
	}
	if (n!=0 && n%7!=0) cout << "-1";
	else{
		for (int i=1;i<=n/7;i++) s+="7";
		cout << s;
	}
}
 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int n;
    cin >> n;
    int d=0;
    for (int i=1;i<=n;i++){
    	string s;
    	cin >> s;
    	if (s=="++X" || s=="X++") d++;
    	else d--;
	}
	cout << d;
} 
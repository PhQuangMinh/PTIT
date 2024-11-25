#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    string s;
    cin >> s;
    int n=s.size();
    int hang;
    for (int i=sqrt(n);i>=1;i--)
        if (n%i==0){
        	hang=i;break;
		}
	int cot=n/hang;
	for (int i=0;i<hang;i++)
	    for (int j=0;j<cot;j++)
	       cout << s[i+hang*j];
}
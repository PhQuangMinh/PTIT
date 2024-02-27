#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
    int test;
    cin >> test;
    for (int j=1;j<=test;j++){
    	string s;
    	cin >> s;
    	int a[15]={0};
		for (int j=0; j<s.size(); j++) {
			int t=s[j]-'0';
			a[t]++;
		}
		cin >> s;
		for (int j=0; j<s.size(); j++) {
			int t=s[j]-'0';
			a[t]++;
		}
		cin >> s;
		for (int j=0; j<s.size(); j++) {
			int t=s[j]-'0';
			a[t]++;
		}
		for (int j=9; j>=0; j--)
			for (int k=0; k<a[j]; k++)
				cout << j;
		cout << "\n";
	}
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int check[150]={0};
	for (int i=0;i<s.size();i++){
		check[s[i]]++;
	}
	for (int i=97;i<=122;i++)
	    if (check[i]==0){
	    	cout << "NO";
	    	return 0;
		}
	cout << "YES";
}
 
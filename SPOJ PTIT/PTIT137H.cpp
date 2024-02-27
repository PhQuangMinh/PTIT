#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int in[100];
void so(){
	for (int i='0';i<='9';i++) in[i]=i-'0';
	for (int i='A';i<='Z';i++) in[i]=i-'A'+10;
	for (int i='a';i<='z';i++) in[i]=i-'a'+36;
}
int main(){
	faster();
	so();
    string s;
    cin >> s;
    while (s!="end"){
    	int sum=0;
    	int lens=s.size();
    	for (int i=0;i<lens;i++){
		    sum+=in[s[i]];
//		    cout << in[s[i]] << " ";
		}
//		cout << sum << " ";
		if (sum%61==0) cout << "yes\n";
		else cout << "no\n";
		cin >> s;
	}
}
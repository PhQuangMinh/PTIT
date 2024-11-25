#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
char a[50];
int d=0;
void kitu(){
	for (int i='A';i<='Z';i++) a[++d]=i;
	a[++d]='_';
	a[++d]='.';
}
char trave(char s, int n){
	int vt;
	for (int i=1;i<=28;i++)
	    if (a[i]==s){
	    	vt=i;
	    	break;
		}
	if (vt+n>28) return a[vt+n-28];
	return a[vt+n];
}
void solve(string s, int n){
	for (int i=s.size()-1;i>=0;i--)
	    cout << trave(s[i], n);
	cout << "\n";
}
int main(){
	faster();
	kitu();
	int n;
	cin >> n;
	while (n!=0){
		string s;
		cin >> s;
		solve(s, n);
		cin >> n;
	}
} 
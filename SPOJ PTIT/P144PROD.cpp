#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string xl(string s){
	while (s[0]=='0') s.erase(s.begin());
	return s;
}
bool cmp(string a, string b){
	if (a.size()<b.size() || a.size()==b.size() && a<b) return 1;
	return 0;
}
void solve(int n, string s[], int test){
	sort(s+1, s+n+1, cmp);
	cout << "Case " << test << ": ";
	if (s[1]==s[n]) cout << "There is a row of trees having equal height.";
	else cout << s[1] << " " << s[n]; 
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	int test=0;
	while (n!=0){
	    string s[n+5];
	    for (int i=1;i<=n;i++){
		    cin >> s[i];
		    s[i]=xl(s[i]);
     	}
     	test++;
     	solve(n, s, test);
     	cin >> n;
	}
}
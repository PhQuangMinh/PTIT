#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string rotate(string s){
	int sum=0;
	for (int i=0;i<s.size();i++)
	    sum+=s[i]-65;
	sum%=26;
	for (int i=0;i<s.size();i++){
		if (s[i]+sum>90){
		    s[i]=s[i]+sum-26;
//		    cout << s[i] << "\n";
		}
		else s[i]=s[i]+sum;
	}
	return s;
}
string merge(string s, string t){
	int n=s.size();
	for (int i=0;i<n;i++){
		int gt=t[i]-65;
		if (s[i]+gt>90){
		    s[i]=s[i]+gt-26;
//		    cout << s[i] << "\n";
		}
		else s[i]=s[i]+gt;
	}
	return s;
}
void solve(string s){
	int n=s.size();
	string s1, s2;
	s1.resize(n/2);
	s2.resize(n/2);
	copy(s.begin(), s.begin()+n/2, s1.begin());
	copy(s.begin()+n/2, s.begin()+n, s2.begin());
	s1=rotate(s1);
	s2=rotate(s2);
	cout << merge(s1, s2);
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++){
		string s;
		cin >> s;
	    solve(s);
	    if (i!=n) cout << "\n";
	}
} 
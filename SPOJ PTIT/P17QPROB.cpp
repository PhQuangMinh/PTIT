#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
	if (a+b<b+a) return true;
    return false;
}
void solve(){
	int n;
	cin >> n;
	string x;
	vector<string> s;
	for (int i=0;i<n;i++){
	   cin >> x;
	   s.push_back(x);
    } 
	sort(s.begin(), s.end(), cmp);
	for (int i=0;i<n;i++) cout << s[i];
	cout << endl;
}
int main(){
	int t;
	cin >> t;
	while (t--) solve();
} 
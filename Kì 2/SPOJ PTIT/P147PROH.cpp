#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int test;
void solve(string s, string t){
	int dems[200]={0};
	for (int i=0;i<s.size();i++) dems[s[i]]++;
	int demt[200]={0};
	for (int i=0;i<t.size();i++) demt[t[i]]++;
	test++;
	cout << "Case " << test << ": ";
	for (int i=90;i<=130;i++)
	    if (dems[i]!=demt[i]){
	    	cout << "different\n";
	    	return;
		}
	cout << "same\n";
}
int main(){
	faster();
    string s, t;
    cin >> s >> t;
    while (s!="END" && t!="END"){
    	solve(s, t);
    	cin >> s >> t;
	}
}
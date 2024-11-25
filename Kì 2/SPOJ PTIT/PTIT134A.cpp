#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(string s){
	int dem[200]={0};
	for (int i=0;i<s.size();i++)
	    dem[s[i]]++;
	int res=0;
	for (int i='a';i<='z';i++)
	    if (dem[i]>0 && dem[i]%2==1) res++;
	if (res>0 && res%2==0) cout << "Second\n";
	else cout << "First\n";
}
int main(){
	faster();
	string s;
	while (cin >> s){
		solve(s);
	}
} 
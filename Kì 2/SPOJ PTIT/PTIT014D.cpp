#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int check(string s){
	int sum=0;
	for (int i=0;i<=s.size()-1;i++)
	    sum+=s[i]-'0';
	while (sum>=10){
		int tong=0;
		while (sum!=0){
			tong+=sum%10;
			sum/=10;
		}
		sum=tong;
	}
	if (sum==9) return 1;
	return 0;
}
void solve(){
	string s;
	cin >> s;
	if (check(s)) cout << "1\n";
	else cout << "0\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
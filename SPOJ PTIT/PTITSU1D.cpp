#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	int m, n;
	cin >> m >> n;
	string s[5*m+5];
	int dem[5]={0};
	for (int i=1;i<=5*m+1;i++) cin >> s[i];
	for (int i=5;i<=5*m+1;i+=5){
		for (int j=i;j>=i-3;j--){
			for (int k=1;k<=5*n+1;k+=5){
			    if (s[j][k]=='*' && s[j+1][k]!='*') dem[4-(i-j)]++;
			    if (j==i-3 && s[j][k]=='.') dem[0]++;
			}
		}
	}
	for (int i=0;i<5;i++) cout << dem[i] << " ";
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
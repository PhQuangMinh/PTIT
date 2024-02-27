#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
void solve(){
	string s;
	cin >> s;
	int n=s.size();
	int d=0;
	int dem[200]={0};
	for (int i=0;i<n;i++)
	    dem[s[i]]++;
	for (int i=97;i<=122;i++)
	    if (dem[i]%2==1) d++;
	if (n%2==1 && d<=3 || n%2==0 && d<=2) cout << "YES";
	else cout << "NO";
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
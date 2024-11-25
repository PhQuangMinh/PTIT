#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(int a, int b){
	if (a<b) return true;
	return false;
}
void solve(){
	int n;
	cin >> n;
	string s;
	getline(cin >> ws, s);
	int a[n+5];
	stringstream tach(s);
	string k;
	int tru=0;
	int i=1;
	while (tach >> k){
		if (k=="-") tru=1;
		if (k!="-"){
			stringstream str(k);
			str >> a[i];
			if (tru==1){
			    a[i]=-a[i];
			    tru=0;
			}
			i++;
		}
	}
	for (int i=1;i<=n;i++){
		if (i==1) cout << (long long)a[i]*a[i+1] << " ";
		else 
		    if (i==n) cout << (long long)a[i]*a[i-1] << " ";
		    else
		        cout << (long long) a[i-1]*a[i+1] << " ";
	}
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
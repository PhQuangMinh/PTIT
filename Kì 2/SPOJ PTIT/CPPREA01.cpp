#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
bool cmp(long long a, long long b){
	if (a<b) return true;
	return false;
}
void solve(){
	int n;
	cin >> n;
	string s;
	getline(cin >> ws, s);
	long long a[n+5];
	stringstream tach(s);
	string k;
	int tru=0;
	int i=0;
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
//		cout << tru << " ";
	}
	sort(a, a+n, cmp);
//	for (int i=0;i<n;i++) cout << a[i] << " ";
	int j=0;
	i=0;
	while (i<n){
		if (i>a[j]) j++;
		else 
		    if (i==a[j]){
			    cout << i << " ";
			    i++;j++;
		    }
		    else{
		        cout << "-1 ";
		        i++;
		    }
	}
//	cout << i << " ";
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
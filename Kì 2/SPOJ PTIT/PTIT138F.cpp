#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
struct doi{
	string s;
	int den, id;
	doi(){
		den=0;
	}
};
void solve(){
	int n, m;
	cin >> n >> m;
	doi a[100];
	for (int i=1;i<=n;i++){
	    cin >> a[i].s;
	    a[i].den=0;
	}
	string sden[n+5]={""};
	for (int i=1;i<=m;i++){
		cin >> a[i].id;
		cin >> a[a[i].id].den;
		sden[a[a[i].id].den]=a[a[i].id].s;
	}
//	for (int i=1;i<=n;i++) cout << a[i].den << " ";
//   for (int i=1;i<=n;i++) cout << sden[i] << "\n";
	for (int i=1;i<=n;i++)
	    if (sden[i]==""){
	    	for (int j=1;j<=n;j++)
	    	    if (a[j].den==0){
	    	    	sden[i]=a[j].s;
	    	    	a[j].den=-1;
	    	    	break;
				}
		}
	for (int i=1;i<=n;i++){
		cout << sden[i];
		if (i!=n) cout << " ";
	}
	cout << "\n";
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
}
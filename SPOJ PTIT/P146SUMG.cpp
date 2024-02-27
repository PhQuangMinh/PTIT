#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n, m, a, b;
	cin >> n >> m >> a >> b;
    string s[n+5];
    for (int i=1;i<=n;i++) cin >> s[i];
    for (int i=1;i<=n;i++){
    	string t="";
    	for (int j=0;j<m;j++){
    		for (int k=1;k<=b;k++)
    		    t+=s[i][j];
		}
		for (int j=1;j<=a;j++){
		    cout << t;
		    if (j!=a || i!=n) cout << "\n";
		}
	}
}
 
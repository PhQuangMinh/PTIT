#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int ucln(int a, int b){
	int t=b%a;
	while (t!=0){
		t=a%b;
		a=b;
		b=t;
	}
	return a;
}
int main(){
	faster();
    int n, m; 
    cin >> n >> m;
    int a[n+5];
    int b[m+5];
    for (int i=1;i<=n+1;i++) cin >> a[i];
    for (int j=1;j<=m+1;j++) cin >> b[j];
    if (n>m){
    	if (a[1]*b[1]>0) cout << "Infinity";
    	else cout << "-Infinity";
	}
	else 
	    if (n<m) cout << "0/1";
	    else{
	    	int uc=ucln(a[1], b[1]);
	    	if (b[1]>0 && uc<0 || b[1]<0 && uc>0) uc=-uc;
	    	cout << (a[1]/uc) << "/" << (b[1]/uc);
		}
} 
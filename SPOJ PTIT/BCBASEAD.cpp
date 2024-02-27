#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
string a[40];
void bd(){
    a[0]="{}";
	a[1]="{{}}";
	for (int i=2;i<=25;i++){
		a[i]="{";
		for (int j=0;j<i;j++){
		    a[i]=a[i]+a[j];
		    if (j==i-1) a[i]+="}";
		    else a[i]+=",";
		}
	}	
}
void solve(){
	string x, y;
	cin >> x >> y;
	int sox, soy;
	for (int i=0;i<=25;i++){
		if (a[i]==x) sox=i;
		if (a[i]==y) soy=i;
	}
	int kq=sox+soy;
	cout << a[kq] << "\n";
}
int main(){
	faster();
	bd();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) solve();
} 
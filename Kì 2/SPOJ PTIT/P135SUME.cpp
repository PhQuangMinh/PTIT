#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
    int a[10];
    for (int i=1;i<=8;i++) cin >> a[i];
    int ok;
    if (a[1]<a[2]) ok=1;
    else 
        if (a[1]>a[2]) ok=0;
        else{
        	cout << "mixed";
		}
	for (int i=1;i<8;i++){
		if (ok && a[i]>=a[i+1] || ok==0 && a[i]<=a[i+1]){
			cout << "mixed";
			return 0;
		}
	}
	if (ok) cout << "ascending";
	else cout << "descending";
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
	faster();
	int a[10], b[10];
	for (int i=1;i<=3;i++) cin >> a[i] >> b[i];
    if (a[1]==a[2]){
	    cout << a[3] << " ";
	    if (b[1]==b[3]) cout << b[2];
	    else cout << b[1];
	}
    else 
	    if (a[2]==a[3]){
	    	cout << a[1] << " ";
	        if (b[1]==b[2]) cout << b[3];
	        else cout << b[2];
		}
		else{
			cout << a[2] << " ";
			if (b[1]==b[2]) cout << b[3];
			else cout << b[1];
		}
} 
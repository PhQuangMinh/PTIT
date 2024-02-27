#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int r, c, a, b;
	cin >> r >> c >> a >> b;
	for (int i=1;i<=r;i++){
		string s="";
		if (i%2==1){
			for (int j=1;j<=c;j++)
			    if (j%2==1)
			    	for (int k=1;k<=b;k++) s+='X';
			    else 
				    for (int k=1;k<=b;k++) s+='.';
			for (int j=1;j<=a;j++) cout << s << "\n";
		}
		else{
			for (int j=1;j<=c;j++)
			    if (j%2==1) 
				    for (int k=1;k<=b;k++) s+='.';
			    else 
				    for (int k=1;k<=b;k++) s+='X';
			for (int j=1;j<=a;j++) cout << s << "\n";
		}
	}
} 
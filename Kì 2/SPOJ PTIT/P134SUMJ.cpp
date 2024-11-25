#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
char gt(char s, int vt){
	string t[15];
	t[1]=".,?!";
	t[2]="ABC";
	t[3]="DEF";
	t[4]="GHI";
	t[5]="JKL";
	t[6]="MNO";
	t[7]="PQRS";
	t[8]="TUV";
	t[9]="WXYZ";
	for (int i=2;i<=9;i++){
		int n=t[i].size();
		for (int j=0;j<n;j++){
//			char kt=tolower(t[i][j]);
            int k=t[i][j]+32;
		    if (t[i][j]==s || s==k){
		    	vt=vt%n;
		    	int du;
		    	if (j-vt<0) du=j+n-vt;
		    	else du=j-vt;
		    	if (t[i][j]==s) return t[i][du];
		    	else return t[i][du]+32;
			}
		}
	}
	for (int i=0;i<4;i++)
	    if (t[1][i]==s){
	    	vt=vt%4;
		    int du;
		    if (i-vt<0) du=i+4-vt;
		    else du=i-vt;
		   	if (t[1][i]==s) return t[1][du];
		    else return t[1][du]+32;
		}
}
string solve(string s){
	int n=s.size();
	for (int i=0;i<n;i++){
//		cout << gt(s[i], i+1) << " ";
	    s[i]=gt(s[i], i+1);
	}
	return s;
}
int main(){
	faster();
	string s;
	while (1){
		cin >> s;
		if (s=="#") break;
		cout << solve(s) << "\n";
	}
	
} 
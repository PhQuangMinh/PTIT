#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int demngang(string s[]){
	int d1[100]={0};
	int d2[100]={0};
	int d3[100]={0};
	for (int j=0;j<9;j++){
		d1[s[1][j]]++;
		d1[s[2][j]]++;
		d2[s[3][j]]++;
		d2[s[4][j]]++;
		d3[s[5][j]]++;
		d3[s[6][j]]++;
	}
	int mi=mod;
	for (int i='A';i<='Z';i++)
	    for (int j='A';j<='Z';j++)
	        for (int k='A';k<='Z';k++){
	        	if (i!=j && i!=k){
	        		mi=min(mi, 54-d1[j]-d2[i]-d3[k]);
				}
			}
	return mi;
}
int demdoc(string s[]){
	int d1[100]={0};
	int d2[100]={0};
	int d3[100]={0};
	for (int i=1;i<=6;i++){
	    d1[s[i][0]]++;d1[s[i][1]]++;d1[s[i][2]]++;
	    d2[s[i][3]]++;d2[s[i][4]]++;d2[s[i][5]]++;
	    d3[s[i][6]]++;d3[s[i][7]]++;d3[s[i][8]]++;
	}
	int mi=mod;
	for (int i='A';i<='Z';i++)
	    for (int j='A';j<='Z';j++)
	        for (int k='A';k<='Z';k++){
	        	if (i!=j && i!=k){
	        		mi=min(mi, 54-d1[j]-d2[i]-d3[k]);
				}
			}
	return mi;
}
int main(){
	faster();
	string s[10];
	for (int i=1;i<=6;i++) cin >> s[i];
	int kq=min(demdoc(s), demngang(s));
    cout << kq;
}
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int nt[100005];
void sang(){
	for (int i=2;i*i<=100000;i++)
	    if (nt[i]==0)
	        for (int j=i*i;j<=100000;j+=i)
	            nt[j]=1;
}
void solve(string s){
	int n=s.size();
	int m;
	if (n>=5) m=5;
	else m=n;
	int max=0;
	for (int i=1;i<=m;i++){
		for (int j=0;j<=n-i;j++){
			string t="";
		    for (int k=j;k<j+i;k++)
		        t+=s[k];
		    stringstream chuyen(t);
		    int snt;
		    chuyen >> snt;
			if (nt[snt]==0 && snt > max) max=snt; 
		}
	}
	cout << max << "\n";
}
int main(){
	faster();
	sang();
    string s;
    cin >> s;
    while (s!="0"){
    	solve(s);
    	cin >> s;
	}
}
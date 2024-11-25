#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string dn(string s){
	int n=s.size();
	for (int i=0;i<n/2;i++){
		char t=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=t;
	}
    return s;
}
int main(){
	faster();
    string s;
    cin >> s;
    int n=s.size();
    int d=0;
    string ans;
 //   cout << s << "\n";
    for (int i=0;i<=n-3;i++){
        for (int j=i+1;j<=n-2;j++){
        	string s1, s2, s3;
        	s1.resize(i+1);
        	s2.resize(j-i);
        	s3.resize(n-j-1);
            copy(s.begin(), s.begin()+i+1, s1.begin());
        	copy(s.begin()+i+1, s.begin()+j+1, s2.begin());
        	copy(s.begin()+j+1, s.begin()+ n, s3.begin());
 //       	cout << s1 << " " << s2 << " " << s3 << "\n";
        	s1=dn(s1);
        	s2=dn(s2);
        	s3=dn(s3);
 //       	cout << s1 << " " << s2 << " " << s3 << "\n";
        	if (d==0){
			    ans=s1+s2+s3;
			    d=1;
			}
        	else
			   if (s1+s2+s3<ans) ans=s1+s2+s3;
		}
	}
	cout << ans;
}
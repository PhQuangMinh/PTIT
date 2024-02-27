#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
    while (n!=0){
    	string s1, s2, res, s;
    	cin >> s1 >> s2 >> res;
    	int d=0;
    	while (d<=50){
    		s.resize(2*n);
    		s="";
    		for (int i=0;i<n;i++)
    		    s=s+s2[i]+s1[i];
		    s1.resize(n);
		    s2.resize(n);
		    copy(s.begin(), s.begin()+n+1, s1.begin());
		    copy(s.begin()+n, s.begin()+2*n, s2.begin());
		    d++;
//		    cout << s << " " << s1 << " " << s2 << "\n";
		    if (s==res) break;
		}
		if (s==res && d<=50) cout << d;
		else cout << -1;
		cout << "\n";
		cin >> n;
	}
}
 
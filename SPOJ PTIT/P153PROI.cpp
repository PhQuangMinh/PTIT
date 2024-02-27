#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++){
    	string s;
    	getline(cin, s);
    	transform(s.begin(), s.end(), s.begin(), ::tolower);
    	int d[200]={0};
    	for (int i=0;i<s.size();i++){
    		d[s[i]]++;
		}
		int res=0;
		for (int i=97;i<=122;i++)
		    if (d[i]>1) res+=d[i];
		cout << res << " ";
		for (int i=0;i<s.size();i++)
            if (d[s[i]]>0 && s[i]!=' '){
            	d[s[i]]=0;
            	cout << s[i];		
			}
		cout << "\n";
	}
}
 
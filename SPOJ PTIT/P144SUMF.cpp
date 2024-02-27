#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans=0;
	int dw=0, dm=0;
	while (s.size()>0){
//		cout << dm << " " << dw << "\n";
		if (s.size()==1){
			if (s[0]=='M' && abs(dm+1-dw)<=n || s[0]=='W' && abs(-dm+1+dw)<=n) cout << dm+dw+1;
			return 0;
		}
		if (dw==dm){
			if (s[0]=='W') dw++;
			else dm++;
			s.erase(s.begin());
		}
		else{
			if (dm>dw){
				if (s[0]=='W'){
					s.erase(s.begin());
					dw++;
				}
				else
				    if (s[1]=='W'){
				    	s.erase(s.begin()+1);
					    dw++;
					}
					else{
						s.erase(s.begin());
					    dm++;
					}
			}
			else{
				if (s[0]=='M'){
					s.erase(s.begin());
					dm++;
				}
				else
				    if (s[1]=='M'){
				    	s.erase(s.begin()+1);
					    dm++;
					}
					else{
						s.erase(s.begin());
					    dw++;
					}
			}
		}
		if (abs(dm-dw)>n){
			cout << dm+dw-1;
			return 0;
		}
	}
	cout << dm+dw;
}
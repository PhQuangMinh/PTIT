#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string solve(){
	string s;
	cin >> s;
	if (s.size()==1) return s;
    int du=0;
	for (int i=s.size()-1;i>=0;i--){
		if (i!=0){
		    int k=s[i]-'0'+du;
		    if (k>=5) du=1;
		    else du=0;
		    s[i]='0';
		}
		else{
			int t=s[0]-'0'+du;
			if (t==10){
				s[0]='0';s="1"+s;
			}
			else s[0]=t+'0';
		}
	}
	return s;
}
int main(){
	faster();
	int n;
	cin >> n;
	for (int i=1;i<=n;i++) cout << solve() << "\n";
}

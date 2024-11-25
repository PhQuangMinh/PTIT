#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int main(){
	faster();
	int m, s;
	cin >> m >> s;
    if (s==0 || 9*m<s || s==0 && m>1){
    	cout << "-1 -1";
    	return 0;
	}
	if (s==0 && m==1){
		cout << "0 0";
		return 0;
	}
	//somax
	int scs=m;
	string max="";
	while (s>0 && m>0){
		if (s>=10){
			max+='9';
			s-=9;
		}
		else{
			max+=(s+'0');
			s=0;
		}
		m--;
		if (s==0){
			for (int i=1;i<=m;i++) max+='0';
		    m=0;
		}
	}
	//somin
	string min=max;
	if (min[scs-1]=='0'){
		min[scs-1]='1';
		for (int i=scs-2;i>=0;i--){
			if (min[i]!='0'){
				int t=min[i]-'0';
				t--;
				min[i]=t+'0';
				break;
			}
		}
	}
	for (int i=scs-1;i>=0;i--) cout << min[i];
	cout << " ";
	cout << max;
}
 
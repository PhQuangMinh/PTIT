#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
string np(string s, string t){
	int ns=s.size();
	int nt=t.size();
	string res="";
	int i=ns-1;
	int j=nt-1;
	int du=0;
	while (i>=0 || j>=0){
		int t1=(i>=0) ? s[i]-'0' : 0;
		int t2=(j>=0) ? t[j]-'0' : 0;
		int tong=t1+t2+du;
		if (tong==3){
			res='1'+res;
			du=1;
		}else
		    if (tong==2){
			    res='0'+ res;
			    du=1;
		    }
		    else{
		    	char k=tong+'0';
		    	res=k+res;
		    	du=0;
			}
			i--;j--;
	}
	if (du==1) res="1"+res;
	return res;
}
int main(){
	faster();
	string n;
	cin >> n;
	string res=n;
	for (int i=1;i<=16;i++){
		res=np(res, n);
	}
	cout << res;
} 
#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
const int mod=1e9+7;
int check(string a, string b){
	if (a.size()<b.size()|| a.size()==b.size() && a<=b) return 1;
	return 0;
}
int main(){
	faster();
    string s;
    cin >> s;
    string t=s;
    if (t[0]=='-') t.erase(t.begin());
//    cout << t;
    if (t.size()<=3){
    	if (s=="-128" || check(t, "127")){
    		cout << "byte";
		}
		else cout << "short";
		return 0;
	}
	if (t.size()<=5){
		if (s=="-32768" || check(t, "32767")) cout << "short";
		else cout << "int";
		return 0;
	}
	if (t.size()<=10){
		if (s=="-2147483648" || check(t, "2147483647")) cout << "int";
		else cout << "long";
//		cout <<  check(t, "2147483647");
		return 0;
	}
	if (t.size()<=19){
		if (check(t, "9223372036854775808")) cout << "long";
		else cout << "BigInteger";
		return 0;
	}
	cout << "BigInteger";
}
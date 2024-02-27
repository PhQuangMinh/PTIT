#include<bits/stdc++.h>
using namespace std;
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int n;
void sinhday(int x){
	string s="";
	while (x!=0){
	    char k=(x%2+'0');
		s=k+s;
		x/=2;
	}
	while (s.size()<n) s="0"+s;
	cout << s << "\n";
}
int main(){
	faster();
	cin >> n;
	int k=pow(2, n);
	for (int i=0;i<k;i++) sinhday(i);
} 
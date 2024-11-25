#include<bits/stdc++.h>
using namespace std;
char dong(int x, char y){
	string s1="qwertyuiop";
	string s2="asdfghjkl;";
	string s3="zxcvbnm,./";
	int len=s1.size();
	int d=0, i;
	for (i=0;i<len;i++){
	   if (s1[i]==x) d=1;
	   if (s2[i]==x) d=2;
	   if (s3[i]==x) d=3;
	   if (d!=0) break;
    }
    int k;
	if (y==1){
		if (i==len-1) k=0;
		else k=i+1;
	}
	else{
		if (i==0) k=len-1;
		else k=i-1;
	}
	if (d==1) return s1[k];
	else
	    if (d==2) return s2[k];
	return s3[k];
}
void trai(){
	string s;
	cin >> s;
	int len=s.size();
	for (int i=0;i<len;i++) cout << dong(s[i], 1);
}
void phai(){
	string s;
	cin >> s;
	int len=s.size();
	for (int i=0;i<len;i++) cout << dong(s[i], 0);
}
int main(){
	char x;
	cin >> x;
	cin.ignore();
	if (x=='L') trai();
	else phai();
} 